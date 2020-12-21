#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<cstdio>
#include<vector>

using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b) {
	return a.second > b.second;
}

int main(){
    map<string,string> nametoid;
    map<string,int> nametogrades;
    int n;
    cin >> n;
    while(n > 0){
        string name;
        string id;
        int grades;
        cin >> name >>id >> grades;
        nametoid[name] = id;
        nametogrades[name] = grades;
        n--;
    }
    vector< pair<string,int> > vec;
    for(map<string,int>::iterator it = nametogrades.begin(); it != nametogrades.end(); it++){
        vec.push_back( pair<string,int>(it->first,it->second) );
    }
    sort(vec.begin(),vec.end(),cmp); 
    cout<< vec[0].first << " " << nametoid[vec[0].first] << endl;
    cout<< vec[vec.size()-1].first << " " << nametoid[vec[vec.size()-1].first] << endl;
    return 0;
}
