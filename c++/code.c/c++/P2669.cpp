#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int l = 1;
    while((l+1)*l/2 <= n){
        l++;
    }
    int real_l = l-1;
    int res = n - (real_l+1)*real_l/2;
    long long sum = 0;
    for(int i=1;i<=real_l;i++){
        for(int j=0;j<i;j++){
            sum += i;
        }
    }
    for(int i=0;i<res;i++){
        sum += l;
    }
    cout << sum;
    return 0;
}