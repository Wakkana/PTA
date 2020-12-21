#include<iostream>
#include<unordered_map>
#include<string>


using namespace std;

int main(){
    int n,dif,ff;
    cin >> n >> dif >> ff;
    int pos = 1;
    dif -= 1;
    unordered_map<string,bool> check;
    int y = dif;
    bool flag = true;
    while(n--){
        string temp;
        cin >> temp;
        if(pos < ff) {
            pos++;
            continue;
        }
        else if(pos >= ff){
            if(pos == ff ||(!check[temp] && dif == 0)){
                flag = false;
                cout << temp << endl;
                check[temp] = true;
                dif = y;
            }
            else if(check[temp] && dif == 0){
                continue;
            }
            else dif--;
            pos++;
        }
    }
    if(flag) cout << "Keep going...";
}