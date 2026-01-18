#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> record;
    record.push_back(n);
    while(n != 1){
        if(n & 1){
            n = 3*n+1;
            record.push_back(n);
        }
        else{
            n >>= 1;
            record.push_back(n);
        }
    }
    reverse(record.begin(),record.end());
    for(size_t i=0;i<record.size();i++){
        if(i>0) cout << " ";
        cout << record[i];
    }
return 0;
}