#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool mm = false;
    getchar();
    while(n--){
        if(mm)cout << endl;
        mm = true;
        string temp;
        getline(cin,temp);
        if(temp.length() < 6) {cout << "Your password is tai duan le.";}
        else{
            bool num = false;
            bool alpha = false;
            bool flag = false;
            for(auto x:temp){
                if(x == '.') continue;
                else if(x - '0' >= 0 && x - '0' < 10) num = true;
                else if((x - 'a' >= 0 && x - 'a' < 26 )||(x - 'A' >= 0 && x - 'A' < 26 )) alpha = true;
                else {
                    cout << "Your password is tai luan le.";
                    flag = true;
                    break;
                }
            } 
            if(!flag && num && !alpha) cout << "Your password needs zi mu.";
            else if(!flag && !num && alpha) cout << "Your password needs shu zi.";
            else if(!flag && num && alpha) cout << "Your password is wan mei.";
        }
    }
    return 0;
}