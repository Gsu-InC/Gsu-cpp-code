#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    int n1,n2,n3;
    if(n<=150){
        n1 = n;
        n2 = 0;
        n3 = 0;
    }
    else if(n<=400){
        n1 = 150;
        n2 = n-150;
        n3 = 0;
    }
    else{
        n1 = 150;
        n2 = 250;
        n3 = n-400;
    }
    double l1,l2,l3;
    l1 = n1 * 0.4463;
    l2 = n2 * 0.4663;
    l3 = n3 * 0.5663;
    double sum = l1 + l2 + l3;
    cout << fixed << setprecision(1) << sum;
    return 0;
}
