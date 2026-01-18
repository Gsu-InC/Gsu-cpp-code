#include<iostream>
using namespace std;
int main(){
    double n;
    cin >> n;
    int step = 1;
    double s = 2;
    double os = 2;
    while(s<n){
        os *= 0.98;
        s += os;
        step++;
    }
    cout << step;
    return 0;
}