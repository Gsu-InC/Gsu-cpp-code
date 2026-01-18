#include<iostream>
#include<string>
using namespace std;
int main(){
        int a[24] = {0};
        for(int i=0;i<24;i++){
            int e;
            cin >> e;
            a[i] = e; 
        }
        while(true){
            int m;
            cin >> m;
            if(m<0 || m>23){
                break;
            }
            else{
                if(a[m] > 50 ){
                    cout << a[m] << " Yes" << endl; 
                }
                else{
                    cout << a[m] << " No" << endl;
                }
            }
        }
        return 0;
}