#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt1 = 0;
    int cnt2 = 0;
    while(n--){
        int a,ax,b,bx;
        cin >> a >> ax >> b >> bx;
        if(ax == a + b && bx != a + b) cnt2++;
        if(bx == a + b && ax != a + b) cnt1++;
    }
    cout<< cnt1 << " " << cnt2;
    return 0;
}