#include<vector>
#include<cstdlib>
#include<string>
#include<iostream>
#define MOD 1000000007

using namespace std;
int main(){
    string ans;
    cin >> ans;
    int t = ans.size();
    vector<vector<int>> a(t);
    int cntP = 0;
    int cntT = 0;
    for(int i = 0; i < t; i++){
        if(ans[i] == 'P') cntP++;
        if(ans[i] == 'A') a[i].push_back(cntP);
    }
    int sum = 0;
    for(int i = t - 1 ; i >= 0; i--){
        if(ans[i] == 'T') cntT++;
        if(ans[i] == 'A') {
            a[i].push_back(cntT);
            sum += a[i][0] * a[i][1];
            sum %= MOD;
        }
    }

    cout << sum;
    return 0;
}