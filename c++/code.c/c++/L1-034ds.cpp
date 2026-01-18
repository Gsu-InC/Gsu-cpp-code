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
            mp[b]++; // 直接递增，不需要判断是否存在
        }
    }
    
    // 找到出现次数最多的数字
    int maxCount = 0;
    int maxNumber = 0;
    
    for(const auto& element : mp){
        // 如果当前数字出现次数更多，或者次数相同但数字更大
        if(element.second > maxCount || 
           (element.second == maxCount && element.first > maxNumber)){
            maxCount = element.second;
            maxNumber = element.first;
        }
    }
    
    cout << maxNumber << " " << maxCount; 
    return 0;
}