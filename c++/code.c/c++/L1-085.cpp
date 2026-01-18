#include<iostream>
#include<map>
using namespace std;
int main() {
    bool arr[7][7];
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            arr[i][j] = true;
        }
    }
    for(int i=1;i<=6;i++){
        int o;
        cin >> o;
        arr[i][o] = false;
    }
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=6;j++){
           for(int k=6;k>0;k--){
                if(arr[j][k]){
                    arr[j][k] = false;
                    break;
                }
           }
        }
    }
    for(int i=1;i<=6;i++){
        if(i > 1){
                cout << " ";
            }
        for(int j=6;j>0;j--){
            if(arr[i][j]){
                cout << j;
                break;
            }
        }
    }
    return 0;
}