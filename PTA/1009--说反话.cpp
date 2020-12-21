#include<stack>
#include<iostream>
#include<string>

using namespace std;

int main(){
    string temp;
    stack<char> s;
    cin >> temp;
    int cnt = 0;
    for(auto x:temp){
        s.push(x);
        cnt++;
    }
    while(!s.empty()){
        char t = s.top();
        cout << t;
        s.pop();
    }
    return 0;
}