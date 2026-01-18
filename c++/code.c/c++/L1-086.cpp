#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    int alen = a.size();
    int blen = b.size();
    string at,bt;
    for(int i=1;i<alen;i++){
        int a_1 = a[i] - '0';
        int a_2 = a[i-1] - '0';
        if(a_1 % 2 == a_2 % 2){
            at += '0' + max(a_1,a_2);
        }
    }
    for(int i=1;i<blen;i++){
        int b_1 = b[i] - '0';
        int b_2 = b[i-1] - '0';
        if(b_1 % 2 == b_2 % 2){
            bt += '0' + max(b_1,b_2);
        }
    }
    if(at == bt){
        cout << at;
    }
    else{
        cout << at << endl << bt;
    }
    return 0;




}