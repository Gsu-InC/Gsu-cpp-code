#include<iostream>
using namespace std;
int main(){
    int y,m;
    int arr[13] = {0};
    arr[1] = 31;
    arr[2] = 28;
    arr[3] = 31;
    arr[4] = 30;
    arr[5] = 31;
    arr[6] = 30;
    arr[7] = 31;
    arr[8] = 31;
    arr[9] = 30;
    arr[10] = 31;
    arr[11] = 30;
    arr[12] = 31; 
    cin >> y >> m;
    bool run = false;
    if((y%4 == 0 && y%100 != 0) || y%400 == 0){
        run = true;
    }
    if(m==2 && run){
        cout << arr[m]+1;
    }
    else{
        cout << arr[m];
    }
    return 0;
}