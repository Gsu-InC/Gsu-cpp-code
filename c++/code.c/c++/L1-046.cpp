#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << "1 1";
    }
    else{
        long long res = 1;
        int len = 1;
        string s;
        while(res%n){
            res = (res%n)*10+1;
            len++;
            s += '0' + res/n;
        }
        bool zero = true;
        for(char c : s){
            if(c != '0'){
                zero = false;
            }
            if(!zero){
                cout << c;
            }
        }
        cout << " " << len;
    }
    return 0;
}