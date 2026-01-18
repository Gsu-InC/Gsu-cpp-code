#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    cin >> n >> c;
    int m;
    int m1 = n/2;
    double m2 = n*0.5;
    double _m = m2 - m1;
    if(_m >=0.5){
        m = m1 +1;
    }
    else{
        m = m1;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << c;
        }
        cout << endl;
    }
}