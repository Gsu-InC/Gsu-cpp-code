#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(b == 1){
       cout << "-" << endl;
       if(a == 0){
        cout << "stop";
       }
       else if(a == 1){
        cout << "move";
       }
       else{
        cout << "-";
       }
    }
    else{
        if(a == 0){
            cout << "biii" << endl << "stop";
        }
        else if(a == 1){
            cout << "dudu" << endl << "move";
        }
        else{
            cout << "-" << endl << "stop";
        }
    }
    return 0;
}