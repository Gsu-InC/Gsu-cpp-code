#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long N;
    cin >> N;
    int max_len = 0;
    int start = 0;
    for(int i = 2;i * i <= N;i++){
        if(max_len >= sqrt(N)+1-i){
            break;//Ã·«∞Ã¯≥ˆ£¨±‹√‚»ﬂ”‡
        }
        if(N % i != 0){
            continue;
        }
        long long n = N;
        int j = i;
        int len = 0;
        while(n % j == 0){
            len++;
            n /= j;
            j++;
        }
        if(max_len < len){
            max_len = len;
            start = i;
        }
    }
    if(max_len == 0){
        cout << "1" << endl;
        cout << N;
    }
    else{
        cout << max_len << endl;
        for(int i=0;i<max_len;i++){
            if(i > 0){
                cout << "*";
            }
            cout << start + i;
        }
    }
    return 0;
}