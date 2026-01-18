#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int arr[3] = {0};
    for(int i=0;i<3;i++){
        int n;
        cin >> n;
        arr[i] = n;
    }
    sort(arr,arr+3);
    for(int i=2;i<sqrt(arr[2]);i++){
        if(arr[0] % i == 0 && arr[2] % i == 0){
            arr[0] /= i;
            arr[2] /=i;
        }
    }
    cout << arr[0] << "/" << arr[2];
    return 0;
}