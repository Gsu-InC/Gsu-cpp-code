#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    int N;
    cin >> N;
    map<int,pair<string,int>> mp;
    for(int i=0;i<N;i++){
        string name;
        int b,m;
        cin >> name >> b >> m;
        mp[b] = make_pair(name,m);
    }
    for(const auto& element:mp){
        if((element.first<15 || element.first>20)||(element.second.second<50 || element.second.second>70)){
            cout << element.second.first << endl;
        }
    }
}