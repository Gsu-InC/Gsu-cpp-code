#include<iostream>
#include<cmath>
using namespace std;
bool zhishufo(int n){
    bool yes = true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            yes = false;
        }
    }
    if(yes){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int l;
    cin >> l;
    int sum = 0;
    int i=2;
    int count = 0;
    while(sum+i<=l){
        if(zhishufo(i)){
            sum += i;
            cout << i << endl;
            count++;
        }
        i++;
    }
    cout << count;
    return 0;
}