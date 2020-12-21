#include<iostream>

using namespace std;

int sum(int a,int b){
    int ans = 0;
    for(int i = a; i <= b; i++){
        ans += i;
    }
    return ans;
}
int main(){
    cout << sum(-5,8)<< endl;
    return 0;
}
