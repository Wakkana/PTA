#include<vector>
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> array(n,0);
    for(auto& x:array){
        int temp;
        cin >> temp;
        x = temp;
    }
    vector<vector<int>>index(n,vector<int>(2,0));
    index[0][0] = 0;
    index[n-1][1] = 1000000001;
    for(int i = 1; i < n; i++){
        index[i][0] = max(index[i-1][0],array[i-1]);
    }
    for(int j = n - 2; j >= 0; j--){
        index[j][1] = min(index[j+1][1],array[j+1]);
    }
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(array[i] < index[i][1] && array[i] > index[i][0]) ans.push_back(array[i]);
    }
    bool flag = false;
    cout << ans.size() << endl;
    for(auto x:ans){
        if(flag) cout << " ";
        cout << x;
        flag = true;
    }
    cout << endl;
    return 0;
}
