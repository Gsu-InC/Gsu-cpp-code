#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int a,m;
    cin >> a >> m;
    a++;
    vector<pair<int,int>> ve;
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        ve.push_back({u,v});
    }
    int l = ve.size();
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(ve[i].first >= 0 && ve[j].first >= 0){
                if(ve[i].first <= ve[j].first && ve[i].second >= ve[j].second){
                    ve[j] = {-1,-1};
                }
                else if(ve[i].first > ve[j].first && ve[i].second < ve[j].second){
                    ve[i] = ve[j];
                    ve[j] = {-1,-1};
                }
                else if(ve[i].first < ve[j].first && ve[i].second < ve[j].second && ve[i].second >= ve[j].first){
                    ve[i].second = ve[j].second;
                    ve[j] = {-1,-1};
                }
                else if(ve[i].first > ve[j].first && ve[i].second > ve[j].second && ve[i].first <= ve[j].second){
                    ve[i].first = ve[j].first;
                    ve[j] = {-1,-1};
                }
            }
        }
    }
    int count = 0;
    for(int i=0;i<l;i++){
        if(ve[i].first >= 0){
            count += ve[i].second - ve[i].first + 1;
        }
    }
    cout << a - count;
    return 0;
}
// 区间合并逻辑有问题