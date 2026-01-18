#include<iostream>
using namespace std;
int main(){
    int a,b;
    int n;
    cin >> a >> b >> n;
    int counta = 0;
    int countb = 0;
    for(int i=0;i<n;i++){
        int ahan,ahua,bhan,bhua;
        cin >> ahan >> ahua >> bhan >> bhua;
        int he = ahan + bhan;
        bool atf = (ahua == he);
        bool btf = (bhua == he);
        if(atf && !btf){
            counta++;
            if(counta > a){
                cout << "A" << endl << countb;
                break;
            }
            }
        if(btf && !atf){
            countb++;
            if(countb > b){
                cout << "B" << endl << counta;
                break;
            }
            }
        
        
    }
    return 0;
}