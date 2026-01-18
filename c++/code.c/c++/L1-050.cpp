#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int L,N;
    cin >> L >> N;
    long long len = pow(26,L);//最大表达数是26^L-1
    long long pos =len - N;//倒N是26^L-N
    string result;
    for(int i =0;i<L;i++){
        int n =pos %26;
        result = char('a' + n) + result;//数字转字母的方法，非常实用
        pos /= 26;
    }
    cout << result << endl;
    return 0;
}
//大部分正数都能这么转十进制