#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long s = 0;
    if(n<0){
        long long n1 = -n;
        while(n1){
            s = s*10 + n1%10;
            n1 /= 10;
        }
        cout << -s;
    }
    else{
        while(n){
            s = s*10 + n%10;
            n /= 10;
        }
        cout << s;
    }
    return 0;
}