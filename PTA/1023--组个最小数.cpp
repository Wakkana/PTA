#include<iostream>

using namespace std;

int main(){
    string ans = "";
    int res[10];
    for(int i = 0; i < 10; i++){
        cin >> res[i];
    }
    for(int i = 1; i < 10; i++){
        if(res[i] != 0){
            cout << i;
            res[i]--;
            break;
        }
    }
    for(int i = 0; i < 10; i++){
        while(res[i] > 0){
           cout << i;
           res[i]--;
        }
    }
    return 0;
}