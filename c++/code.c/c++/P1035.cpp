#include<iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    double s = 0;
    double i = 1;
    while(s<=k){
        double x = 1/i;
        s += x;
        i++;
    }
    cout << i-1;
    return 0;
}