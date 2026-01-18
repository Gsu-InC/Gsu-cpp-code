#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for(char c : a){
        if(b.find(c) == string::npos){
            cout << c;
        }
    }
    return 0;
}//²»ÓÃset¸ü¼ò½à