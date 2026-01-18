#include<iostream>
using namespace std;
int main(){
    int arr[10] = {0};
    for(int i=0;i<10;i++){
        int n;
        cin >> n;
        arr[i] = n;
    }
    int h;
    cin >> h;
    int r = h + 30;
    int count = 0;
    for(int i=0;i<10;i++){
        if(arr[i] <= r){
            count++;
        }
    }
    cout << count;
    return 0;
}