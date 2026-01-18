#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double height,weight;
    cin >> weight >> height;
    double height2 = height * height;
    double result = weight / height2;
    cout << fixed << setprecision(1) << result << endl;
    if(result > 25){
        cout << "PANG";
    }
    else{
        cout << "Hai Xing";
    }
    return 0;

}