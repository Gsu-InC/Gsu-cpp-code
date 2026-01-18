#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int b;
            cin >> b;
            mp[b]++;
        }
    }
    
    // 使用自定义比较函数找到最大值
    auto maxElement = max_element(mp.begin(), mp.end(), 
        [](const pair<int, int>& a, const pair<int, int>& b) {
            // 先比较出现次数，次数相同再比较数字大小
            return a.second < b.second || 
                   (a.second == b.second && a.first < b.first);
        });//使用Lambda表达式；
    
    cout << maxElement->first << " " << maxElement->second; 
    return 0;
}