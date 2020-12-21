#include<iostream>

using namespace std;

int main(){
    int n,m,d;
    cin >> n >> m >> d;
    int sum = n + m;
    int mulindex = 1;
    int temp = 0;
    int res = 0;
    
    while(sum > d){
        temp = sum % d;
        res = res<<1;
        res += temp;
        sum /= d;
    }
    cout << res;
    return 0;
}