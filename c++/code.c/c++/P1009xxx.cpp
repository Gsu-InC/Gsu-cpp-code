#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    long long s = 0;
    long long jiecheng = 1;
    while(i<=n){
        jiecheng *= i;
        s += jiecheng;
        i++;
    }
    cout << s;
    return 0;
}