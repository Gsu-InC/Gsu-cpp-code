#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<iomanip>
using namespace std;
int main(){
    string A,B;
    cin >> A >> B;
    set<char> B1;
    for(char c: B){
        B1.insert(c);
    }
    
    string B2(B1.begin(),B1.end());
    int l = B2.length();
    for(int i=0;i < l ;i++){
        remove(A.begin(),A.end(),B2[i]);
    }
    cout << A;
}