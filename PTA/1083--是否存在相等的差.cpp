#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> map;
    int n;
    cin >> n;
    int i = 1;
    while(n--){
        int temp;
        cin >> temp;
        map[abs(temp-i)]++;
        i++;
    }
    bool flag = false;

    for(auto x:map){
        if(x.second == 1) continue;
        if(flag) cout << endl;
        flag = true;

        cout << x.first << " " << x.second;
        
    }
    return 0;
}
