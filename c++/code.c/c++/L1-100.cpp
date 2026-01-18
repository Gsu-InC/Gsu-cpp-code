#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long long sum = 0;
    for(int i=0;i<m;i++){
        int point;
        cin >> point;
        sum += point;    
    }
    long long she = (m-1) * n;
    long long zhishao = sum - she;
    if(zhishao < 0){
        cout << 0;
    }
        else{
            cout << zhishao;
        }
    return 0;
}