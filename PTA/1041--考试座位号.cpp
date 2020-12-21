#include<unordered_map>
#include<iostream>
#include<string>

using namespace std;
int main(){
    unordered_map<int,string> toid;
    unordered_map<int,int> toloc;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string temp1;
        int temp2;
        int temp3;
        cin >> temp1 >> temp2 >> temp3;
        toid[temp2] = temp1;
        toloc[temp2] = temp3;
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int id;
        cin >> id;
        cout << toid[id] << " " << toloc[id] << endl;
    }
    return 0;

}