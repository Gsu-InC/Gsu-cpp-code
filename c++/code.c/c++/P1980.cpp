#include<iostream>
using namespace std;
int main(){
    int count[10] = {0};
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int j = i;
        while(j/10){
            int res = j%10;
            j /= 10;
            count[res]++;
        }
        count[j]++;
    }
    int index;
    cin >> index;
    cout << count[index];
}