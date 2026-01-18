#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    long long n,c;
    cin >> n >> c;
    vector<long long> as;
    unordered_map<int,int> count;
    for(int i=0;i<n;i++){
        long long a;
        cin >> a;
        count[a]++; 
        as.push_back(a);
    }
    long long ans = 0;
    if(c == 0){
        for(const auto& element : count){
            ans += element.second*(element.second-1)/2;
        }
    }
    else{
        for(size_t i=0;i<as.size();i++){
            ans += count[as[i]+c];
        }
    }
    cout << ans;
    return 0;
}