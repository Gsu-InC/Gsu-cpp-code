#include<iostream>
using namespace std;
int main(){
    bool run = false;
    int n;
    cin >> n;
    if((n%4 == 0 && n%100 != 0) || n%400 == 0){
        run = true;
    }
    if(run){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}