#include<vector>
#include<iostream>

using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    while(m > n){
        m -= n;
    }
    vector<int> map;
    while(n--){
        int temp;
        cin >> temp;
        map.push_back(temp);
    }
    for(auto x:map){
        map.push_back(x);
    }
    bool flag = false;
    vector<int> x = vector<int>(map.begin()+map.size()/2-m,map.begin()-m+map.size());
    for(auto s:x){
        if(flag) cout << ' ';
        cout << s;
        flag = true;
    }
    return 0;
}