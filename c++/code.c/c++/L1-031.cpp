#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i < N;i++){
        int H,W;
        cin >> H >> W;
        double Wb = (H - 100)*0.9;
         Wb = Wb*2;
        double dw = abs(W -Wb);
        double _bw = Wb/10;
        if(dw < _bw){
            cout << "You are wan mei!";
        }
        else{
            if(Wb < W){
                cout << "You are tai pang le!";
            }
            else{
                cout << "You are tai shou le!";
            }
        }
    cout << endl;
    }
}