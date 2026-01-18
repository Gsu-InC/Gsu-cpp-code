#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    long long c;
    cin >> n >> c;
    vector<long long> v(n);
    unordered_map<long long,int> freq;
    for(int i=0;i<n;i++){
        long long temp;
        cin >> temp;
        v[i] = temp;
        freq[temp]++;
    }
    long long count = 0;
    if(c == 0){
        for(auto& it : freq){
            long long num = it.second;
            count += num*(num-1)/2;
        }
    }
    else{
        for(int i=0;i<n;i++){
            count += freq[v[i]+c];
        }
    }
    cout << count;
    return 0;
}