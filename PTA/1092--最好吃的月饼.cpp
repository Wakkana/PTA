#include<vector>
#include<iostream>

using  namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> ans(n,0);
    int m;
    cin >> m;
    int index = 0;
    while(m--){
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            ans[i] += temp;
            index = max(ans[i],index);
        }
    }
    cout << index << endl;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(ans[i] == index) {
            if(flag) cout << " ";
            cout << i+1;
            flag = true;
        }
    }

    return 0;
}