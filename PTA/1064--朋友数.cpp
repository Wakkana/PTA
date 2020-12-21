#include<iostream>
#include<algorithm>
#include<set>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>s;
    while(n--){
        int temp;
        cin >> temp;
        string ss = to_string(temp);
        int sum = 0;
        for(auto x:ss){
            sum += (int)x - 48;
        }
        s.insert(sum);
    } 
    //sort(s.begin(),s.end());
    bool flag = false;
    cout << s.size() << endl;
    for(auto x:s){
        if(flag) cout << ' ';
        cout << x;
        flag = true;
    }
    return 0;
}