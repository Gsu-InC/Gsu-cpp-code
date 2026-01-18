#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int count = 0;
    cin >> n;
    for(int i=2;i<=n;i++){
        bool sushu = true;
        long long m = pow(2,i) - 1;
        for(int j=2;j*j<m;j++){
            if( m % j == 0){
                sushu = false;
            }
        }
        if(sushu){
            count++;
            cout << m << endl;
        }
    }
    if(count == 0){
        cout << "None";
    }
}