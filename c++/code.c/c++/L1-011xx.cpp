#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string A,B;
    int a = A.length();
    int b = B.length();
    cin >> A >> B;
    for(int i=0;i<a;i++){
        int count = 0;
        for(int j=0;j<b;j++){
            if(A[i] == B[j]){
                count++;
            }
        if(count == 0){
            cout << A[i];
            
        }
        }
    }
}