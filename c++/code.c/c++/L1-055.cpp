#include<iostream>
using namespace std;
int main(){
    int ag,bg;
    int ping[3];
    cin >> ag >> bg;
    int counta = 0;
    int countb = 0;
    for(int i=0;i<3;i++){
        cin >> ping[i];
        if(ping[i] == 0){
            counta++;
        }
        else{
            countb++;
        }
    }
    if(ag > bg){
        if(counta != 0){
            cout << "The winner is a: " << ag << " + " << counta;
        }
        else{
            cout << "The winner is b: " << bg << " + " << countb;
        }
    }
    else{
        if(countb != 0){
            cout << "The winner is b: " << bg << " + " << countb;
        }
        else{
            cout << "The winner is a: " << ag << " + " << counta;
        }
    }
    return 0;
}