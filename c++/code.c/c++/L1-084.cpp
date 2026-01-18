#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int c = a + b;
    long long result = 1;
    for(int i=1;i<=c;i++){
        result *= i;
    }
    cout << result;
}