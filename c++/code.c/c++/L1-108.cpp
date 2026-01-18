#include<iostream>
using namespace std;
long long fast_pow(long long a,long long b){
    long long ans = 1;
    while(b){
        if(b & 1){
            ans *= a;
        }
        a *= a;
        b >>= 1;
    }
    return ans;
}
int main(){
    long long n;
    cin >> n;
    long long s=1;
    long long e = 0;
    while(s<n){
        s = fast_pow(2,e);
        e++;
    }
    long long ans = fast_pow(2,e-1);
    cout << ans;
    return 0;
}