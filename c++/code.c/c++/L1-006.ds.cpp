#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    int maxLen = 0;    // 最长连续因子长度
    int start = 0;     // 连续因子的起始数字
    
    // 遍历可能的起始因子
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i != 0) continue;
        
        long long temp = n;
        int j = i;
        int len = 0;
        
        // 计算从i开始的连续因子长度
        while (temp % j == 0) {
            temp /= j;
            j++;
            len++;
        }
        
        // 更新最长连续因子
        if (len > maxLen) {
            maxLen = len;
            start = i;
        }
    }
    
    // 特殊情况：质数或没有连续因子
    if (maxLen == 0) {
        cout << 1 << endl;
        cout << n << endl;
    } else {
        cout << maxLen << endl;
        for (int i = 0; i < maxLen; i++) {
            if (i > 0) cout << "*";
            cout << start + i;
        }
        cout << endl;
    }
    
    return 0;
}

