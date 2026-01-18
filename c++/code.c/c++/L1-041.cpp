#include<iostream>
using namespace std;
int main(){
    int count = 1;
    while(true){
        int n;
        cin >> n;
        if( n == 250){
            cout << count;
            break;
        }
        else{
            count++;
        }
    }
    return 0;
}