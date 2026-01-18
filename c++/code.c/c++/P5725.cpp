#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count1 = 1;
    int count2 = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << setw(2) << setfill('0') << count1;
            count1++;
        }
        cout << endl;
    }
    cout << endl << endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout << "  ";
        }
        for(int j=0;j<=i;j++){
            cout << setw(2) << setfill('0') << count2;
            count2++;
        }
        cout << endl;
    }
    return 0;
}