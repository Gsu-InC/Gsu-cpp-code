#include<iostream>
using namespace std;
bool TF(long long n){
    if(n<=1){
        return false;
    }
    else if(n == 2){
        return true;
    }
    else if(n % 2 == 0){
        return false;
    } 
    else{
        for(long long i=3;i*i<n;i+=2){
            if(n % i == 0){
                return false;
                
            }
        }
    }
    return true;
}
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        long long num;
        cin >> num;
        if(TF(num)){
        cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}