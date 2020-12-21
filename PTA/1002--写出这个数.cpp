#include<iostream>
#include<stack>

using namespace std;

int main(){
    string s;
    cin>>s;
    int sum = 0;
    for(auto x:s){
        sum+= x - '0';
    }
    stack<int> ans;
    while(sum != 0){
        ans.push(sum%10);
        sum /= 10;
    }
    bool start = true;
    while(!ans.empty()){
        if(!start) cout<< " ";
        else start = false;
        int temp = ans.top();
        ans.pop();
        switch(temp){
            case 0:cout<< "ling";break;
            case 1:cout<< "yi";break;
            case 2:cout<< "er";break;
            case 3:cout<< "san";break;
            case 4:cout<< "si";break;
            case 5:cout<< "wu";break;
            case 6:cout<< "liu";break;
            case 7:cout<< "qi";break;
            case 8:cout<< "ba";break;
            case 9:cout<< "jiu";break;
        }
    }
    return 0;
}