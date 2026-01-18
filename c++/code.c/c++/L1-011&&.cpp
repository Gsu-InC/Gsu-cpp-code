#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string A,B;
    getline(cin,A);
    getline(cin,B);
    set<char> b;
    for(char c : B){
        b.insert(c);
    }
    for(char c : A){
        if(b.find(c) == b.end()){
            cout << c;
        }
    }
return 0;
}