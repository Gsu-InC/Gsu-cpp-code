#include<iostream>
#include<string>
using namespace std;
int main(){
    int round;
    cin >> round;
    for(int i=0;i<round;i++){
        string a,b;
        cin >> a >> b;
        long long sa = 0;
        long long sb = 0;
        long long a_ll,b_ll;
        a_ll = stoll(a);
        b_ll = stoll(b);
        for(char c : a){
            int t = c - '0';
            sa += t;
        }
        for(char c : b){
            int t = c - '0';
            sb += t;
        }
        bool ba = false;
        bool ab = false;
        if(a_ll % sb == 0){
            ab = true;
        }
        if(b_ll % sa == 0){
            ba = true;
        }
        if((ab && ba) || (!ab && !ba)){
            if(a_ll > b_ll){
                cout << "A" << endl;
            }
            else{
                cout << "B" << endl;
            }
        }
        else if(ab && !ba){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
    return 0;
}