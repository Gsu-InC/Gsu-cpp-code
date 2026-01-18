#include<iostream>
#include<string>
using namespace std;

int main(){
    string A,B;
    cin >> A >> B;
    for(size_t i = 0;i < A.size();i++){
        if(A[i] < '0' || A[i] > '9'){
            A.clear();
            A = "?";
            break;
        }
    }
    for(size_t i = 0;i < B.size();i++){
        if(B[i] < '0' || B[i] > '9'){
            B.clear();
            B = "?";
            break;
        }
    }
    cout << A << " + " << B << " = ";
    if(A == "?" || B == "?"){
        cout << "?";
    }
    if(A != "?" && B != "?"){
        long long a = stoi(A);
        long long b = stoi(B);
        if(a == 0 || a > 1000 || b == 0 || b > 1000){
             cout << "?";
         }
    
        else{
            long long sum = a + b;
            cout << sum;
        }
    }
    return 0;    
}

   

