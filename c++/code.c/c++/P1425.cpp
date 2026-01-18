#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int deltah = c-a;
    int deltam;
    if(d<b){
        deltam = 60 - b + d;
        deltah--;
    }
    else{
        deltam = d-b;
    }
    cout << deltah << " " << deltam;
    return 0;
}