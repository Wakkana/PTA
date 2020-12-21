#include<iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int i = 0;
	while( s[i] != 'E' ) i++;//定位E 
	string t = s.substr(1, i-1);//t保存E之前的字符串（不包含符号） 
	int n = stoi(s.substr(i+1));//n保存E之后的字符串对应的数字 
	if(s[0] == '-') cout << '-';
	if(n < 0) {//左移 
		cout << "0.";
		for(int j=0; j<abs(n)-1; j++) cout << '0';
		for(int j=0; j<t.length(); j++)
			if(t[j] != '.') cout << t[j];	
	} else {
		cout << t[0];//小数点前 
		int cnt,j;
		for(j=2,cnt=0; j<t.length()&&cnt<n; j++,cnt++) cout << t[j];
		if(j == t.length()){//j已经走完t,n还没用完或者刚好用完，补0 
			for(int k=0; k<n-cnt; k++) cout << '0';
		} else {//n已经用完，j还没走完t,继续输出剩下的t 
			cout << '.';
			for(int k=j; k<t.length(); k++) cout << t[k];
		}
	}
	
	return 0;
 } 