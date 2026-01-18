#include<iostream>
using namespace std;
int main(){
    int h,r;
    cin >> h >> r;
    double s = 3.14 * r * r;
    double v = h * s;
    int V = 20000;
    int ans = V/v;
    cout << ans+1;
    return 0;
}