#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double a,b,c,p;
    cin >> a >> b >> c;
    p = (a+b+c)/2;
    double s2 = p * (p-a) * (p-b) * (p-c);
    double s = sqrt(s2);
    cout << fixed << setprecision(1) << s;
    return 0;
}