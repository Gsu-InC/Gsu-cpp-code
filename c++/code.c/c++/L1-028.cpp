#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        long long s;
        cin >> s;
        if(s == 2){
            cout << "Yes";
        }
        else{
            long long count = 0;
        for(long long j=3;j*j<=s;j+=2){
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
    }
}//ÒÀ¾É³¬Ê±