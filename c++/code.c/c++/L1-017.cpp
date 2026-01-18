#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string N;
    cin >> N;
    double l = N.length();
    double count = 0;
    for(int i=0;i<l;i++){
        if(N[i] == '2'){
            count++;
        }
    }
    if(count == 0){
        cout <<"0.00%";
        return 0;
    }
    int a = N[N.length()-1];
    if(N[0] == '-'){
        l -= 1;
    }
    count /= l;
    if(N[0] == '-'){
        count *=1.5;
    }
    if( a == '0' || a == '2' || a == '4' || a == '6' || a == '8'){ //不能转换数字取模，
        count *=2;
    }
    count *= 100;
    cout << fixed << setprecision(2) << count << "%";
}