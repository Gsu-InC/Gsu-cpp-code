#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        for(int j=0;j<k;j++){
            int b;
            cin >> b;
            if(mp.find(b) == mp.end()){
                mp[b] = 1;
            } 
            else{
                mp[b]++;
            }
        }
    }
    int bian = 0;
    auto maxm = max_element(mp.begin(),mp.end(),[](const auto& a,const auto& b){return a.second < b.second;});
    int maxmm = maxm -> second;
    for(const auto& element : mp){
        if(element.second == maxmm && bian < element.first){
            bian = element.first;
        }
    }
    cout << bian << " " << maxmm; 
    return 0;
}