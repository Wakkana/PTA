#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> school(n+1,0);
    pair<int,int> champion = {0,0};
    while(n--){
        int m;
        int grades;
        cin >> m >> grades;
        school[m] += grades;
        if(school[m] > champion.second){
            champion.first = m;
            champion.second = school[m];
        }
    }
    cout << champion.first << " " << champion.second;  
    return 0;
}