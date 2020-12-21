#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int M;
    cin >> M;
    vector<int> dis(M);
    for(int i = 0; i < M; i++){
        cin >> dis[i];
    }
    sort(dis.begin(),dis.end(),greater<int>());
    int i = 0;
    while(dis[i] > i+1){
        i++;
    }
    cout << i;
    return 0;
  
}