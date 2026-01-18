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
    int max_ex = 0;
    long long max_base = 0;
    bool meiyou = true;
    for(int i=1;i<10;i++){
        long long sum = 0;
        int base = 1;
        while(sum < n){
            sum += fast_pow(base,i);
            base++;
        }
        if(sum == n){
            max_ex = i;
            meiyou = false;
            max_base = base-1;
        }
    }
    if(meiyou){
        cout << "Impossible for " << n;
    }
    else{
        for(long long i=1;i<=max_base;i++){
            if(i>1){
                cout << "+";
            }
            cout << i << "^" << max_ex;
        }
    }
    return 0;
}//大幂数不一定只在0~9，需要新的算法