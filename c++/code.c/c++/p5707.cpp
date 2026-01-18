#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int s,v;
    cin >> s >> v;
    int t;
    if(s % v == 0){
        t = s/v;
    }
    else{
        t = s/v + 1;
    }
    int realt = t + 10;
    int h = 8;
    int m = 60;
    int deltah = realt/60;
    int deltam = realt % 60;
    int ansh,ansm;
    if(deltah <= 8){
        ansh = h-deltah;
    }
    else{
        ansh = 24 + h - deltah;
    }
    if(deltam != 0){
        ansh--;
        ansm = m-deltam;
    }
    else{
        ansm = 0;
    }
    cout << setw(2) <<setfill('0') << ansh << ":" << setw(2) << setfill('0') << ansm;
    return 0;
}