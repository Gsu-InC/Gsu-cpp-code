#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string m;
    cin >> n >> m;
    int n0[3][5] = {0};
    int n1[3][5] = {1};
    int n2[3][5] = {0};
    int n3[3][5] = {0};
    int n4[3][5] = {0};
    int n5[3][5] = {0};
    int n6[3][5] = {0};
    int n7[3][5] = {1};
    int n8[3][5] = {0};
    int n9[3][5] = {0};
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++) cout << n0[i][j];
    }

    return 0;
}