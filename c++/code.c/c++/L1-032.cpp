#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int N;
    char c;
    string input;
    cin >> N >> c;
    cin.ignore();
    getline(cin,input);
    int M = input.size();
    if( N >= M){
        cout << setw(N) << setfill(c) << input << endl;
    }
    else{
        string cutinput = input.substr(M - N,N);
        cout << cutinput << endl;
    }
}