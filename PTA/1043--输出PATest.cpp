#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string temp;
    cin >> temp;
    vector<int> ans(6,0);
    for(auto x:temp){
        switch(x){
            case 'P':ans[0]++;break;
            case 'A':ans[1]++;break;
            case 'T':ans[2]++;break;
            case 'e':ans[3]++;break;
            case 's':ans[4]++;break;
            case 't':ans[5]++;break;
        }
    }
    int cnt;
    while(true){
        cnt = 0;
        for(int i = 0; i < 6; i++){
            if(ans[i] != 0){
                switch(i){
                    case 0:cout<<'P';break;
                    case 1:cout<<'A';break;
                    case 2:cout<<'T';break;
                    case 3:cout<<'e';break;
                    case 4:cout<<'s';break;
                    case 5:cout<<'t';break;
                }
                ans[i]--;
            }
            else cnt++;
        }
        if(cnt == 6) break;
    }
    return 0;
}