#include<iostream>
using namespace std;
int main(){
    int F,C,a,b;
    cin >> F;
    a=F-32;
    b=a*5;//先做乘法再做除法避免精度丢失
    C = b/9;
    cout << "Celsius = "<<C;
return 0;
}
