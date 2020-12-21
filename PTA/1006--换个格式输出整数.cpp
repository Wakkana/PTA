#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string ans = "";
    while(n >= 100){
        ans += "B";
        n -= 100;
    }
    while(n >= 10){
        ans += "S";
        n -= 10;
    }
    for(int i = 1; i <= n; i++){
        ans+= to_string(i);
    }
    cout << ans;
    return 0;
}
