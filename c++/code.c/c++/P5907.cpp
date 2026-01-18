#include<iostream>
using namespace std;
int main(){
    int m,s,t;
    cin >> m >> t >> s;
    if(t == 0){
        cout << 0;
    }
    else{
        int eat;
        if(s % t == 0){
            eat = s/t;
        }
        else{
            eat = s/t + 1;
        }
        if(m>eat){
            cout << m-eat;
        }
        else{
            cout << 0;
        }
    }
    return 0;
}