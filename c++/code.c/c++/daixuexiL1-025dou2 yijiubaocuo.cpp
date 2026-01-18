#include <iostream>
#include <string>
using namespace std;

// 判断字符串是否为正整数
bool isPositiveInteger(const string &s) {
    if (s.empty()) {
        return false;
    }
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    // 转换为长整型判断是否为正整数（避免int溢出）
    long long num = stoll(s);
    return num > 0;
}

int main() {
    string line;
    // 读取整行输入
    getline(cin, line);
    // 找到第一个空格的位置，分割出A和B
    size_t spacePos = line.find(' ');
    string A = line.substr(0, spacePos);
    string B = line.substr(spacePos + 1);

    bool aValid = isPositiveInteger(A);
    bool bValid = isPositiveInteger(B);

    if (aValid && bValid) {
        long long a = stoll(A);
        long long b = stoll(B);
        cout << A << " + " << B << " = " << (a + b) << endl;
    } else {
        if (!aValid) {
            cout << "?";
        } else {
            cout << A;
        }
        cout << " + ";
        if (!bValid) {
            cout << "?";
        } else {
            cout << B;
        }
        cout << " = ?" << endl;
    }

    return 0;
}
