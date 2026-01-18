#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,t;
        cin >> a >> b >> t;
        if(t == a * b){
            cout << "Lv Yan" << endl;
        }
        else if(t == a + b){
            cout << "Tu Dou" << endl;
        }
        else{
            cout << "zhe du shi sha ya!" << endl;
        }
    }
    return 0;
}