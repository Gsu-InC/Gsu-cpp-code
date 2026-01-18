#include<iostream>
using namespace std;
int main(){
    double m,h;
    cin >> m >> h;
    double h2 = h*h;
    double ans = m/h2;
    if(ans < 18.5){
        cout << "Underweight";
    }
    else if(ans < 24){
        cout << "Normal";
    }
    else{
        cout << ans << endl << "Overweight";
    }
    return 0;
}