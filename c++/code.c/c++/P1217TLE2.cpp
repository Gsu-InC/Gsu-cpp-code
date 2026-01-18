#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool zhishufo(long long n){
    bool yes = true;
    if(n%2 == 0) return false;
    for(long long i=3;i<=sqrt(n);i+=2){
        if(n%i == 0){
            yes = false;
            break;
        }
    }
    return yes;
}
bool huiwenfo(long long n){
    long long s = 0;
    long long w = n;
        while(w){
        int res = w%10;
        s = s*10+res;
        w /= 10;
        }
    return n==s;
}
int main(){
    long long a,b;
    cin >> a >> b;
    for(long long i=a;i<=b;i++){
        if(huiwenfo(i)){
            if(zhishufo(i)){
                cout << i << endl;
            }
        }
    }
    return 0;
}//用埃氏筛和数字回文算法
//这个先改一下回文算法，这个算法复杂度比reverse低