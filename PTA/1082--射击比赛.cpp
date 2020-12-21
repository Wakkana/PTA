#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<string,int>> map;
    while(n--){
        string temp;
        int x;
        int y;
        cin >> temp >> x >> y;
        map.push_back({temp,x*x+y*y});
    }
    sort(map.begin(),map.end(),[&](pair<string,int>a,pair<string,int>b){
        return a.second < b.second;
    });
    cout << map[0].first << " " << map[map.size()-1].first;
    return 0;
}