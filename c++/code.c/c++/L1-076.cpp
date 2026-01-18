#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        double p;
        cin >> p;
        if(p < m){
            cout << "On Sale! " << fixed << setprecision(1) << p << endl;
        }
    }
    return 0;
}