#include<iostream>
using namespace std;
int main(){
    bool ou = true;
    bool fanwei = true;
    int n;
    cin >> n;
    if(n & 1){
        ou = false;
    }
    if(n<=4 || n>12){
        fanwei = false;
    }
    if(ou && fanwei){
        cout << 1;
    }
    else{
        cout << 0;
    }
    cout << " ";
    if(ou || fanwei){
        cout << 1;
    }
    else{
        cout << 0;
    }
    cout << " ";
    if((ou && !fanwei)||(!ou && fanwei)){
        cout << 1;
    }
    else{
        cout << 0;
    }
    cout << " ";
    if(!ou && !fanwei){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}