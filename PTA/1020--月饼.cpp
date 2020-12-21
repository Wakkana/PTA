#include<iostream>
#include<vector>
#include <iomanip>
#include<algorithm>

using namespace std;

bool cmp(vector<double> a,vector<double> b){
    return a[1]*b[0] > b[1]*a[0];
}

int main(){
    int n;
    int maxs;
    cin >> n >> maxs;
    double sum = 0;
    vector<vector<double>> a(n,vector<double>(2,0));
    for(int i = 0; i < n; i++) cin >> a[i][0];
    for(int i = 0; i < n; i++) cin >> a[i][1];
    sort(a.begin(),a.end(),cmp);
    for(int i = 0; i < n; i++){
        if(maxs > a[i][0]){
            sum += a[i][1];
            maxs -= a[i][0];
            continue;
        }
        if(maxs <= a[i][0]){
            sum += (a[i][1]/a[i][0] * maxs);
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}
