#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[3] = {0};
    for(int i=0;i<3;i++){
        int n;
        cin >> n;
        arr[i] = n;
    }
    sort(arr,arr+3);
    for(int i=0;i<3;i++){
        char c;
        cin >> c;
        if(i>0){
            cout << " ";
        }
        if(c == 'C'){
            cout << arr[2];
        }
        else if(c == 'B'){
            cout << arr[1];
        }
        else{
            cout << arr[0];
        }
    }
    return 0;
}