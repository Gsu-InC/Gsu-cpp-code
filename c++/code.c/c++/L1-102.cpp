#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<double> price;
    vector<int> numbers;
    price.resize(n+1);
    double sum = 0;
    cin >> n;
    for(int i=0;i<=n;i++){
        numbers.push_back(0);
    }//Ì«¸´ÔÓ£¬Ö±½Óvector<double> price(n+1,0);
    for(int i=1;i<=n;i++){
        double input;
        cin >> input;
        price[i] = input;
    }
    while(true){
        int bianhao,shuliang;
        cin >> bianhao >> shuliang;
        if(bianhao == 0){
            break;
        }
        else{
            numbers[bianhao] += shuliang;
            sum += price[bianhao] * shuliang;
        }
    }
    for(int i=1;i<=n;i++){
        cout << numbers[i] <<endl;
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}