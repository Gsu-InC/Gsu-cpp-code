#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int day = 1;
    while(n != 1){
        day++;
        n >>= 1;
    }
    cout << day;
    return 0;
}