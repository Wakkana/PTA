#include <iostream>

using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    while(n != 1){
        if(n%2 == 1) n = (n*3+1)/2;
        else n /= 2;
        count++;
    }
    cout << count;
    return 0;

}