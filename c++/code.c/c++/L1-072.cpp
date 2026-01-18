#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][3] = {0};
    vector<bool> v;
    v.resize(10);
    for(int i=0;i<10;i++){
        v[i] = false;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int input;
            cin >> input;
            arr[i][j] = input;
            v[input] = true;
        }
    }
    int lackn;
    for(int i=1;i<10;i++){
        if(!v[i]){
            lackn = i;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == 0){
                arr[i][j] = lackn;
            }
        }
    }
    for(int i=0;i<3;i++){
        int x,y;
        cin >> x >> y;
        cout << arr[x-1][y-1] << endl;
    }
    int m;
    int sum = 0;
    cin >> m;
    if(m == 1){
        for(int i=0;i<3;i++){
            sum += arr[0][i];
        }
    }
    else if(m == 2){
        for(int i=0;i<3;i++){
            sum += arr[1][i];
        }
    }
    else if(m == 3){
        for(int i=0;i<3;i++){
            sum += arr[2][i];
        }
    }
    else if(m == 4){
        for(int i=0;i<3;i++){
            sum += arr[i][0];
        }
    }
    else if(m == 5){
        for(int i=0;i<3;i++){
            sum += arr[i][1];
        }
    }
    else if(m == 6){
        for(int i=0;i<3;i++){
            sum += arr[i][2];
        }
    }
    else if(m == 7){
        sum = arr[1][1] + arr[0][0] + arr[2][2];
    }
    else{
        sum = arr[0][2] + arr[1][1] + arr [2][0];
    }
    int l[25] = {0};
    l[6] = 10000;
    l[7] = 36;
    l[8] = 720;
    l[9] = 360;
    l[10] = 80;
    l[11] = 252;
    l[12] = 108;
    l[13] = 72;
    l[14] = 54;
    l[15] = 180;
    l[16] = 72;
    l[17] = 180;
    l[18] = 119;
    l[19] = 36;
    l[20] = 306;
    l[21] = 1080;
    l[22] = 144;
    l[23] = 1800;
    l[24] = 3600;
    cout << l[sum];

}