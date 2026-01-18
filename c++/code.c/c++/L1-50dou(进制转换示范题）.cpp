#include <iostream>
#include <string>
#include <cmath> // 用于计算26^L

using namespace std;

int main() {
    int L, N;
    cin >> L >> N;
    
    // 1. 计算总长度 26^L
    long long total_len = 1;
    for (int i = 0; i < L; ++i) {
        total_len *= 26;
    }
    // 2. 计算正向偏移量（倒数第N个对应的正向位置）
    long long pos = total_len - N;
    
    // 3. 26进制转换：pos → 对应字符（0→a, 1→b...25→z）
    string result;
    for (int i = 0; i < L; ++i) {
        int digit = pos % 26; // 取当前位的26进制数字
        result = char('a' + digit) + result; // 拼接到结果的前面（因为是从低位到高位取的）
        pos = pos / 26; // 去掉当前位，处理更高位
    }
    
    cout << result << endl;
    return 0;
}
