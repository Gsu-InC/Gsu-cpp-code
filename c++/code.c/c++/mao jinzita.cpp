#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k = 1;
    while(k*(k+1)/2 < n){
        k++;
    }
    int line = k-1;
    int c = 2 * line - 1;
    for(int i = 1;i  <= line;i++){
        for(int j = 1;j <= c;j++){
            if(j > line - i && j < line + i){
                if((line+1-i) %2 == 0){
                    if(j % 2 == 0){
                        cout << line+1-i;
                    }
                    else{
                        cout << 0;
                    }
                }
                else{
                    if(j % 2 == 0){
                        cout << 0;
                    }
                    else{
                        cout << line+1-i;
                    }
                }
            }
            else{
                        cout << 0;
                    }
        }
        cout << endl;
    }
}