#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    cin >> n;
    int arr[10] = {0};
    for(size_t i=0;i<n.size();i++){
        if(n[i] >= '0' && n[i] <= '9'){
            int temp = n[i] - '0';
            arr[temp]++;
        }
    }
    for(int i=0;i<10;i++){
        if(arr[i]){
            cout << i << ":" << arr[i] << endl;
        }
    }
    return 0;
}