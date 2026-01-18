#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    int n;
    double sum = 0;
    cin >> n;
    vector<int> numbers(n+1,0);
    vector<double> price(n+1);
    for(int i=1;i<=n;i++){
        double tp;
        cin >> tp;
        price[i] = tp;
    }
    while(true){
        int index,num;
        cin >> index >> num;
        if(index == 0){
            break;
        }
        numbers[index] += num;
        sum += num * price[index];
    }
    for(int i=1;i<=n;i++){
        cout << numbers[i] << endl;
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}