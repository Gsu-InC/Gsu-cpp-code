#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long long base = pow(2,n) - 1;
    for(int i=0;i<m;i++){
        long long t = 1;
        string in;
        cin >> in;
        for(int j=0;j<n;j++){
            if(in[j] == 'y'){
                t = 2*t;
            }
            else{
                t = 2*t+1;
            }
        }
        cout << t - base << endl;
    }
    return 0;
}