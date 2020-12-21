#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int t = n;
    vector<int>s(n,0);
    while(n--){
        int j = t-1;
        int mins = m;
        int maxs = 0;
        int tec;
        int people = -2;
        int sum = 0;
        cin >> tec;
        while(j--){
            int temp;
            cin >> temp;
            if(temp > m || temp < 0) continue;
            else {
                if(temp > maxs){
                    maxs = temp;
                }
                if(temp < mins){
                    mins = temp;
                }
                sum += temp;
                people++;
            }
        }
        sum = sum - maxs - mins;
        float avg = (float)sum/people;
        s[t-n-1] = round((avg+(float)tec)/2);
    }
    for(auto x:s){
        cout << x << endl;
    }
    return 0;
}