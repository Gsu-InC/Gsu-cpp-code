#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int arr[10] = {0};
    if(!n){
        cout << "0 : 1";
    }
    while(n){
        int res = n % 10;
        arr[res]++;
        n /= 10;
    }
    for(int i=0;i<10;i++){
        if(arr[i]){
            cout << i << ":" << arr[i] << endl;
        }
    }
    return 0;
}//忘记n能到1000位了，换字符串吧；