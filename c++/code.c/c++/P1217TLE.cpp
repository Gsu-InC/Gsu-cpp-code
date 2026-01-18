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
    string n_str = to_string(n);
    string rn = n_str;
    reverse(rn.begin(),rn.end());
    if(rn == n_str){
        return true;
    }
    return false;
}
int main(){
    long long a,b;
    cin >> a >> b;
    for(long long i=a;i<=b;i++){
        if(huiwenfo(i) && zhishufo(i)){
            cout << i << endl;
        }
    }
    return 0;
}//用埃氏筛和数字回文算法