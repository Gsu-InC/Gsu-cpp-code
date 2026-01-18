#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    double money = a+0.1*b;
    int i=0;
    while(1.9*i < money){
        i++;
    }
    cout << i-1;
    return 0;
}