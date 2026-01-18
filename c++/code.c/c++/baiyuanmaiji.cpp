#include<iostream>
using namespace std;
int main(){
    int counter = 0;
    for(int i=0;i<=50;i++){
        for(int j=0;j<=100;j++){
          int k = 100-i-j;
          if(k>=0 and k%2 == 0){
            if (2*i+j+0.5*k == 100)
                {counter=counter+1;
                }

            
            }

          }
     
        }
    
    cout << counter << endl;
return 0;
}

