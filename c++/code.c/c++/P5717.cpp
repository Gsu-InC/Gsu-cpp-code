#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int a2 = a*a;
    int b2 = b*b;
    int c2 = c*c;
    bool dengbian = false;
    bool dengyao = false;
    if(a==b && b==c){
        dengbian = true;
    }
    if(a==b || b==c || a==c){
        dengyao = true;
    }
    if(a+b>c && a+c>b && b+c>a){
        if(a2+b2==c2 || a2+c2==b2 || b2+c2==a2){
            cout << "Right triangle" << endl;
        }
        else if(a2+b2<c2 || a2+c2<b2 || b2+c2<a2){
            cout << "Obtuse triangle" << endl;
        }
        else{
            cout << "Acute triangle" << endl;
        }
        if(dengyao){
        cout << "Isosceles triangle" <<endl;
        }
        if(dengbian){
            cout << "Equilateral triangle" <<endl;
        }
    }
    else{
        cout << "Not triangle";
    }
    return 0;

}