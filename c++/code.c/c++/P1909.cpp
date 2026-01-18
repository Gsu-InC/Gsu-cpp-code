#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int numbers;
    cin >> numbers;
    int sum[3] = {0};
    for(int i=0;i<3;i++){
        int n,p;
        cin >> n >> p;
        int curp = 0;
        while(curp*n<numbers){
            curp++;
        }
        sum[i] = curp*p;
    }
    int* min = min_element(sum,sum+3);
    cout << *min;
}
