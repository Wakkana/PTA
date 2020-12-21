#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxn(int n){
    vector<int>temp;
    while(n != 0){
        temp.push_back(n%10);
        n /= 10;
    }
    while(temp.size() != 4){
        temp.push_back(0);
    }
    sort(temp.begin(),temp.end(),greater<int>());
    int res = 0;
    res = temp[0]*1000 + temp[1] * 100 + temp[2] * 10 + temp[3];
    return res;
}

int minn(int n){
    vector<int>temp;
    while(n != 0){
        temp.push_back(n%10);
        n /= 10;
    }
    while(temp.size() != 4){
        temp.push_back(0);
    }
    sort(temp.begin(),temp.end());
    int res = 0;
    res = temp[0]*1000 + temp[1] * 100 + temp[2] * 10 + temp[3];
    return res;
}

int main(){
    int n;
    cin >> n;

    if(maxn(n) - minn(n) == 0) 
        printf("%04d - %04d = %04d\n",maxn(n),minn(n),maxn(n)-minn(n));
    else{
        while(maxn(n)-minn(n) != 6174){
            printf("%04d - %04d = %04d\n",maxn(n),minn(n),maxn(n)-minn(n));
            n = maxn(n)-minn(n);
        }
        printf("%04d - %04d = %04d\n",maxn(n),minn(n),maxn(n)-minn(n));
    }
    return 0;

}