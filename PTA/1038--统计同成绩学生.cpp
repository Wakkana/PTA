#include<unordered_map>
#include<iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<int,int> grades;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        grades[temp]++;
    }
    int m;
    cin >> m;
    bool flag = false;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        if(flag) cout << " ";
        cout << grades[temp];
        flag = true;
    }

    return 0;
}