#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
     int n,m;
     cin >> n;
     map<int,pair<string,int>> mp;
    for(int i=0;i < n;i++){
        string id;
        int test_set,exame_set;
        cin >> id >> test_set >> exame_set;
        mp[test_set] = make_pair(id,exame_set);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        int b;
        cin >>b;
    cout << mp[b].first <<" "<< mp[b].second << endl;
    }
}