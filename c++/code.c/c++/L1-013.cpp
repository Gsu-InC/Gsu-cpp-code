#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int count = 0;
    int count2 = 1;
    for(int i=1;i<=N;i++){
        count2 = 1;
        for(int j=1;j<=i;j++){ 
            count2 *=j;
        }
        count += count2;
    }
    cout << count;
}