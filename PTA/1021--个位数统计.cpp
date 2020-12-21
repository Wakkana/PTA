#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
    string n;
    cin >> n;
    map<char,int> ans;
    for(auto x:n){
        ans[x]++;
    }
    for(auto x:ans){
        cout<< x.first << ":" << x.second << endl;
    }
    return 0;
}