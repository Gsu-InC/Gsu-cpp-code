#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin >> a;
    for(size_t i=0;i<a.size();i++){
        if(i>0) cout << " ";
        cout << a[i];
    }
    return 0;
}