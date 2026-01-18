#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin >> input;
    string input_n;
    string cut = input.substr(0,12);
    for(char c: input){
        if(c >= '0' && c <= '9') {
            input_n += c;
        }
    }
    string end = input.substr(12,1);
    int j=1;
    int sum = 0;
    for(int i=0;i<9;i++){
        int n = input_n[i] - '0';
        int t = n*j;
        sum += t;
        j++;
    }
    int mod = sum % 11;
    if((mod == 10 && end == "X") || mod == end[0]-'0'){
        cout << "Right";
    }
    else{
        if(mod == 10){
            cout << cut << "X";
        }
        else{
            cout << cut << mod;
        }
    }
    return 0;
}