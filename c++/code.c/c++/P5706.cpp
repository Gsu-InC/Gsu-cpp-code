#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double t;
    int n;
    cin >> t >> n;
    double avgt = t/n;
    int cup = n*2;
    cout << fixed << setprecision(3) << avgt << endl;
    cout << cup;
    return 0;
}