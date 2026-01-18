#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int max_len = 0;
    int start = 0;
    for(int i=2;i<=sqrt(n);i++){
        int len = 0;
        int j = i;
        long long temp = n;
        while(temp % j == 0){
            temp /= j;//必须要除掉有些情况才不出错
            j++;
            len++;
        }
        if(len > max_len){
            max_len = len;
            start = i;
        }
    }
    if(max_len == 0){
        cout << 1 << endl;
        cout << n;
    }
    else{
        cout << max_len << endl;
        for(int i=0;i<max_len;i++){
            if(i>0){
                cout << "*";
            }    
            cout << start + i;
        }
    }
    return 0;
}