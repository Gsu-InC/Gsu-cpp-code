#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<int,pair<string,pair<int,bool>>> mp;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int g;
        string name;
        cin >> g >> name;
        mp[i] = {name,{g,true}};
    }
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            if(mp[i].second.first != mp[j].second.first && mp[j].second.second && mp[i].second.second){
                cout << mp[i].first << " " << mp[j].first << endl;
                mp[j].second.second = false;
                mp[i].second.second = false;
            }
        }
    }
    return 0;
}