#include<iostream>
#include<vector>
using namespace std;
void backtrack(vector<int>a,int& res,int& k){
    if(k > 10){
        res += k;
        return;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] == k) continue;
        int m = k;
        k = k*10 + a[i];
        backtrack(a,res,k);
        k = m;
    }

}
int main(){
    int n;
    cin >> n;
    vector<int>ss;
    while(n--){
        int temp = 0;
        cin >> temp;
        ss.push_back(temp);
    }
    int res = 0;
    int k = 0;
    backtrack(ss,res,k);
    cout << res;
    return 0;
}