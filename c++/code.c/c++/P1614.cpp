#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    long long min = 999999999999999999;
    if(n>m){
    for(int i=0;i<n-m;i++){  //m=n时这个循环不执行
        int count = 0;
        for(int j=i;j<i+m;j++){
            count += v[j];
        }
        if(count <= min) min = count;
    }
    }
    else{
        min = 0;
        for(int i=0;i<n;i++){
            min += v[i];
        }
    }
    cout << min;
    return 0;
}