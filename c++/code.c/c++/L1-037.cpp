#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double a,b;
    cin >> a >> b;
    if(b<0){
        cout << a <<"/" << "(" << b << ")"  << "=";
        printf("%.2f",a/b);
    } 
    else if(b == 0){
        cout << a << "/" << b << "=" << "Error";
    }
    else{
        cout << a << "/" << b << "=";
        printf("%.2f",a/b);
    }
}