#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    double sum1 = 0;
    double count1 = 0;
    double sum2 = 0;
    double count2 = 0;
    for(int i=1;i<=n;i++){
        if(i%k == 0){
            sum2 += i;
            count2++;
        }
        else{
            sum1 += i;
            count1++;
        }
    }
    double avg1 = sum1/count1;
    double avg2 = sum2/count2;
    cout << fixed << setprecision(1) << avg2 << " " << fixed << setprecision(1) << avg1;
    return 0;

}