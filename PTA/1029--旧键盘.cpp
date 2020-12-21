#include<unordered_map>
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string a;
    string b;
    cin >> a >> b;

    unordered_map<char,int> ans;
    for(auto x: a){
        ans[toupper(x)]++;
    }
    for(auto x: b){
        ans[toupper(x)]--;
    }
    for(auto x: ans){
        if(x.second != 0){
            cout << x.first;
        }
    }

    return 0;


}