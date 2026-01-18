#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin >> x >> n;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(x != 6 && x != 7){
            sum += 250;
        }
        if(x == 7){
            x = 0;
        }
        x++;
    }
    cout << sum;
    return 0;
}