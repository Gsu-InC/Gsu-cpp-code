#include<iostream>
using namespace std;
int main(){
    int max = 0;
    int maxday = 0;
    for(int i=1;i<8;i++){
        int a1,a2;
        cin >> a1 >> a2;
        int sum = a1 + a2;
        if(sum > 8 &&sum > max){
            max = sum;
            maxday = i;
        }
    }
    cout << maxday;
    return 0;
}