#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<char>check = {'1','0','X','9','8','7','6','5','4','3','2'};
    vector<int> r = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int n;
    cin >> n;
    bool all = true;
    while(n--){
        string temp;
        cin >> temp;
        int sum = 0;
        bool flag = false;
        for(int i = 0; i < 17;i++){
            if(temp[i] == 'X') {
                flag = true;
            }
            else {
                int k = (int)temp[i] - 48;
                sum += k * r[i];
            }
        }
        if(!flag){
            sum %= 11;
            if(check[sum] != temp[17]) flag = true;
        }
        if(flag){
             cout << temp << endl;
             all = false;
        }
    }
    if(all) cout << "All passed";
    return 0;
}