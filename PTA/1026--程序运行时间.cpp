#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float n1,n2;
    cin >> n1 >> n2;
    int res = round(((n2 - n1) / 100));
    int h = 0;
    int s = 0;
    int m = 0;
    while(res >= 3600){
        h++;
        res -= 3600;
    }
    while(res >= 60){
        m++;
        res -= 60;
    }
    s = res;
    printf("%02d:%02d:%02d",h,m,s);

    return 0;
}