#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        long long s;
        cin >> s;
        long long count = 0;
        for(int j=1;j*j<s;j++){
            if(s % j == 0 && s / j != s){
                count++;
            }
        }
        if(count == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}//³¬Ê±