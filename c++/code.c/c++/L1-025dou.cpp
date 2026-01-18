#include<iostream>
#include<string>
using namespace std;

// 检查字符串是否为数字且在 0 到 1000 之间
bool isValidNumber(const string& s) {
    // 检查是否全为数字
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
    }
    // 转换为整数判断范围
    long long num = stoll(s);
    return num > 0 && num <= 1000;
}

int main() {
    string A, B;
    cin >> A >> B;

    bool aValid = isValidNumber(A);
    bool bValid = isValidNumber(B);

    cout << (aValid ? A : "?") << " + " << (bValid ? B : "?") << " = ";

    if (aValid && bValid) {
        long long a = stoll(A);
        long long b = stoll(B);
        cout << a + b;
    } else {
        cout << "?";
    }

    return 0;
}
