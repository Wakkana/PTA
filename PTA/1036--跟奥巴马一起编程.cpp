
#include <iostream>

using namespace std;

int main(){
    int n;
    char s;
    cin >> n >> s;
    int m;
    if(n%2==1) m=(n+1)/2;
	else m=n/2;
    if(n <= 5) m == 3;
    for(int i = 0; i < n; i++){
        cout << s;
    }
    cout << endl;
    for(int i = 0; i < m - 2; i++){
        cout << s;
        for(int j = 0; j < n - 2; j++){
            cout << " ";
        }
        cout << s << endl;
    }
    for(int i = 0; i < n; i++){
        cout << s;
    }
    return 0;
}