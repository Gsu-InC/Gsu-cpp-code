#include<iostream>
using namespace std;
int main(){
    int n;
    char m;
    int a=0;
    cin >> n >> m;
    while(2*a*a-1<=n){
        a++;
    }
    a = a-1;
    for(int i=0;i<a;i++){
        for(int j=0;j<i;j++){
          cout << " ";  
        }
        for(int k=0;k<2*a-1-2*i;k++){
            cout << m;
        }
        cout << endl;
    }
    for(int p=a-1;p>0;p--){
        for(int q=p-1;q>0;q--){
            cout << " ";
        }
        for(int r=0;r<2*a+1-2*p;r++){
            cout << m;
        }
        cout << endl;
    }
int z = n-2*a*a+1;
cout << z;
}