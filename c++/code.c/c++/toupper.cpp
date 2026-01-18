#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    string n;
    cin >> n;
    transform(n.begin(),n.end(),n.begin(),::toupper);
    cout << n;
    return 0;
}