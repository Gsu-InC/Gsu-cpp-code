#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double n = pow(2,31);
    long long i=1;
    long long j=2;
    while(i<n){
        i = i*j;
        j++;
    }
    cout << j-1;
}