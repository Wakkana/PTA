#include<string>
#include<iostream>
#include<map>
using namespace std;

int main(){
    string temp;
    getline(cin,temp);
    map<char,int> cmap;
    for(auto x:temp){
        if( (x - 'a' >= 0 && x - 'a' < 26) || (x - 'A' >= 0 && x - 'A' < 26)){
            x = x >= 'a' ? x:x+32;
            cmap[x]++;
        }
    }
    char ans;
    int cnt = 0;
    for(auto x:cmap){
        if(x.second > cnt){
            ans = x.first;
            cnt = x.second;
        }
    }
    cout << ans << ' ' << cnt;
    return 0;

}