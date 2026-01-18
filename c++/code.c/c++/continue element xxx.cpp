#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    long n;
    cin >> n;
    vector<int> a(n,0);
    for(int i=2;i<=n;i++){
        if (n % i == 0 ){
        a[i]++;
        n /= i;
        i = 1;
        }
        
    }
    int counter[n] = {0};
   for(int i=2;i<=n;i++){
        if(a[i]>0){
            counter[i]++;
            for(int j=i+1;j<=n;j++){
                if(a[j]>0){
                    counter[i]++;
                }
                else{
                    break;
                }
            }
        }
   }
   int max=0;
   int c;
   for(int i=0;i<=n;i++){
        if(max < counter[i] ){
            max = counter[i];
            c = i;
        }
    cout << max;
    for(int i=0;i<max;i++){
        if(i != max-1){
            cout << c+i << "*";
        }
        else{
            cout << c+i;
        }
    }  

   }
}