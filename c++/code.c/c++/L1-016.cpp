#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int n;
    cin >> n;
    int counter = 0;
    string l ={'1','0','X','9','8','7','6','5','4','3','2'};//×¢ÒâxÊÇ´óĞ´
    for(int i=0;i<n;i++){
        cin >> a;
        bool b = true;
        for(int j=0;j<17;j++){
            if(a[j] < '0' || a[j] > '9'){
                cout << a << endl;
                b = false;
                counter++;
                break;
            }
        }
        if(b){
        int a1 = a[0] - '0';
        int a2 = a[1] - '0';
        int a3 = a[2] - '0';
        int a4 = a[3] - '0';
        int a5 = a[4] - '0';
        int a6 = a[5] - '0';
        int a7 = a[6] - '0';
        int a8 = a[7] - '0';
        int a9 = a[8] - '0';
        int a10 = a[9] - '0';
        int a11 = a[10] - '0';
        int a12 = a[11] - '0';
        int a13 = a[12] - '0';
        int a14 = a[13] - '0';
        int a15 = a[14] - '0';
        int a16 = a[15] - '0';
        int a17 = a[16] - '0';
        int sum = a1 * 7 + a2 * 9 + a3 * 10 + a4 *5 + a5 * 8 + a6 * 4 +a7 * 2 + a8 + a9 * 6 + a10 * 3 + a11 * 7 + a12 * 9 + a13 * 10 + a14 * 5 + a15 * 8 + a16 * 4 + a17 * 2;
        int end = sum % 11;        
        if (a[17] != l[end]){
            counter++;
            cout << a << endl;}
        }
    }
    if (counter == 0){
        cout << "All passed";
    }
}