#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string num;
    cin >> num;
    
    int count[10] = {0};  // 初始化数组，统计0-9出现的次数
    int b = num.length();
    // 遍历字符串中的每个字符
    for (int i = 0; i < b; i++) {
        char c = num[i];
        if (c >= '0' && c <= '9') {
            int digit = c - '0';  // 将字符转换为数字
            count[digit]++;       // 对应数字计数加1
        }
    }
    
    // 按数字升序输出结果
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            cout << i << ":" << count[i] << endl;
        }
    }
    
    return 0;
}