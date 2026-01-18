#include<iostream>
#include<vector>
#include<algorithm>  // 添加了头文件
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
    
    // 先按起始位置排序
    sort(ve.begin(), ve.end());
    
    int l = ve.size();
    // 使用更简单的区间合并算法
    for(int i=0;i<l;i++){
        if(ve[i].first < 0) continue;
        for(int j=i+1;j<l;j++){
            if(ve[j].first < 0) continue;
            
            // 如果区间i完全在区间j左边且不重叠，则跳出内层循环（因为已排序）
            if(ve[i].second < ve[j].first) {
                break;
            }
            
            // 如果有重叠，则合并区间
            if(ve[i].second >= ve[j].first) {
                ve[i].second = max(ve[i].second, ve[j].second);
                ve[j] = {-1,-1};
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