#include<unordered_map>
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    unordered_map<char,int> chains;
    cin >> s;
    for(auto x:s){
        chains[x]++;
    }
    string m;
    cin >> m;
    int cnt1 = 0;
    int cnt2 = 0;
    bool flag = true;
    for(auto x:m){
        chains[x]--;
        if(chains[x] < 0) flag = false;
    }
    for(auto x:chains){
        if(x.second > 0) cnt1 += x.second;
        if(x.second < 0) cnt2 -= x.second;
    }
    if(flag) cout << "Yes" << " " << cnt1;
    else cout << "No" << " " << cnt2;
    return 0;
}