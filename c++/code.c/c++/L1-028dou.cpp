#include <iostream>
#include <cmath>
using namespace std;

// 判断一个数是否为素数的函数
bool isPrime(long long n) {
    if (n <= 1) return false;       // 小于等于1，不是素数
    if (n == 2) return true;        // 2是素数
    if (n % 2 == 0) return false;   // 偶数（除了2），不是素数
    
    // 只检查奇数因数（从3到sqrt(n)）
    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; // 存在其他因数，不是素数
        }
    }
    return true; // 无其他因数，是素数
}

int main() {
    int N;
    cin >> N; // 读入要判断的数字个数
    
    for (int i = 0; i < N; ++i) {
        long long num;
        cin >> num; // 读入每个要判断的数字
        if (isPrime(num)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
