#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n,k;
    cin >> n >> k;
    long long c = 0;
    for(long long i=1;i<=n;i++){
        //垃圾pow精度不够
        long long i2 = 1;
        for(long long j=1;j<=k;j++){
            i2 = (i2 * i) %114514;//取模的乘法分配律
        }
        c += i2;
        
    }
    long long end = c % 114514;//取模的加法分配律
    cout << end;
    return 0;
}
// for(long long i=1;i<=n;i++){
//         long long c1 = pow(i,k);
//         long long c2 = c1 % 114514;
//         c += c2;
