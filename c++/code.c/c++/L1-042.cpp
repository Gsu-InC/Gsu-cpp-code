#include<iostream>
#include<string>
using namespace std;
int main(){
    string date;
    cin >> date;
    string m = date.substr(0,2);
    string d = date.substr(3,2);
    string y = date.substr(6,4);
    cout << y << "-" << m << '-' << d;
}