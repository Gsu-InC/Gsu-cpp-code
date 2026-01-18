#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    long long c;
    cin >> n >> c;
    vector<long long> v;
    for(int i=0;i<n;i++){
        long long temp;
        cin >> temp;
        v.push_back(temp);
    }
    long long count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(v[j]-v[i]) == c){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}