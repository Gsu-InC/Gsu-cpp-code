#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int leixing;
    double roubi,julibi;
    cin >> roubi >> leixing >> julibi;
    double ji;
    if(leixing == 0){
        ji = roubi * 2.455;
    }
    else{
        ji = roubi * 1.26;
    }
    cout << fixed << setprecision(2) << ji << " ";
    if(ji < julibi){
        cout << "^_^";
    }
    else{
        cout << "T_T";
    }
    return 0;
}