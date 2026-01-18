#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int l,m;
    cin >> l >> m;
    l++;
    vector<pair<int,int>> r;
    for(int i=0;i<m;i++){
        int v,u;
        cin >> v >> u;
        r[i] = {v,u};
    }
    sort(r.begin(),r.end());
    int s = r.size();
    for(int i=0;i<s;i++){
        if(r[i].first < 0) continue;
        for(int j=i+1;j<s;j++){
            if(r[j].first < 0) continue;
            if(r[i].second >= r[j].first){
                r[i].second = max(r[i].second,r[j].second);
                r[j] = {-1,-1};
            }
            else if(r[i].second < r[j].first) break;
        }
    }
    int count = 0;
    for(int i=0;i<s;i++){
        count += r[i].second - r[i].first + 1;
    }
    cout << l-count;
    return 0;

}