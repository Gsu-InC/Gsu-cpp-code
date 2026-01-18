#include<iostream>
using namespace std;
int main(){
    int budget[12];
    int money = 0;
    int sum = 0;
    int m;
    bool qiong = false;
    for(int i=0;i<12;i++){
        int n;
        cin >> n;
        budget[i] = n;
    }
    for(int i=0;i<12;i++){
        money += 300;
        if(money < budget[i]){
            m = i+1;
            qiong = true;
            break;
        }
        else{
            money -= budget[i];
            if(money >= 100){
                int s = money/100;
                money -= s*100;
                sum += s*100;
            }
        }
    }
    if(qiong){
        cout << "-" << m;
    }
    else{
        cout << sum*1.2 + money;
    }
    return 0;
}