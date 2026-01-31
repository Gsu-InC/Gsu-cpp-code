#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int count[10] = {0};
    for(int i=m;i<=n;i++){
        int temp = i;
        while(temp){
            int num = temp % 10;
            temp /= 10;
            count[num]++;
        }
    }
    for(int i=0;i<10;i++){
        if(i>0) cout << " ";
        cout << count[i];
    }

    return 0;
}