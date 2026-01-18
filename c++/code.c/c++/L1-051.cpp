#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int yuan,zhe;
    cin >> yuan >> zhe;
    double result = yuan * zhe * 0.1;
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}