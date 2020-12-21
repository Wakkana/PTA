#include<iostream>

using namespace std;
    
    
int main(){
    int N,M;
    cin>> N>> M;
    int exe[M];
    for(int i = 0; i < M; i++){
        cin >> exe[i];
    }
    int ra[M];
    for(int i = 0; i < M; i++){
        cin >> ra[i];
    }
    for(int i = 0; i < N; i++){
        int sum = 0;
        for(int j = 0; j < M; j++){
            int temp = 0;
            cin >> temp;
            if(temp == ra[j]) sum+=exe[j];
        }
        cout << sum << endl;
    }
    
    return 0;  
}