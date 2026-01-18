#include<iostream>
#include<cmath>
using namespace std;
bool zhishu(long long n){
    bool yes = true;
    if(n == 2){                //二的判断不能漏
        return true;
    }
    if(n%2 == 0 && n != 2){
        return false;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i == 0){
            yes = false;
            break;
        }
    }
    return yes;
}
int main(){
    long long n;
    cin >> n;
    long long mino;
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            if(zhishu(i)){
                mino = i;
                break;
            }
        }
    }
    cout << n/mino;
    return 0;
}