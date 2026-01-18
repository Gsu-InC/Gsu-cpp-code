#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> list;
    string input;

    // 步骤1：读取字符串，直到输入"."为止
    while (cin >> input) {
        if (input == ".") break; // 遇到"."就停止读取
        list.push_back(input);
    }

    // 步骤2：根据list的大小判断输出
    if (list.size() >= 14 && list[13] != ".") {
        // 有至少14个元素，且第14个元素（索引13）不是"."
        cout << list[1] << " and " << list[13] << " are inviting you to dinner...";
    } else if (list.size() >= 2) {
        // 至少有2个元素，但不足14个，或第14个元素是"."
        cout << list[1] << " is the only one for you...";
    } else {
        // 元素不足2个
        cout << "Nomo... No one is for you ...";
    }

    return 0;
}
