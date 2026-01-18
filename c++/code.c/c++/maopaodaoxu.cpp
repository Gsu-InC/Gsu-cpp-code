#include<iostream>
#include<algorithm>
using namespace std;
void change(int a[],int n){
    bool TF = true;
    for(int i = 0;i < n - 1;i++ ){
        for(int j = 0;j < n - 1;j++){
            if(a[j] < a[j+1]){
                swap(a[j],a[j+1]);
                TF = false;
            }
        }
        if(TF){
            break;
        }
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int m =sizeof(arr)/sizeof(arr[0]);
    change(arr,m);
    for(int i=0;i<m;i++){
        cout << arr[i];
    }    
}