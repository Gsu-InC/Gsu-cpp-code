#include<iostream>
using namespace std;
int main(){
    int c;
    cin >> c;
    int a[10] = {0};
    for(int i=0;i<8;i++){
        a[i] = i;
    }
    a[8] = 1;
    a[9] = 2;
    cout << a[c+2];
    return 0;
}