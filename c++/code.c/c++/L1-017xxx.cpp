#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    long long N;
    double count = 0;
    cin >> N;
    if( N == 0){
        cout << "0.00%";
        return 0;
    }
    string N_str = to_string(abs(N));
    int l = N_str.length();
    char target = '2';
    for(int i=0;i<l;i++){
        if(N_str[i] == target){
            count++;
        }
    } 
    if(count == 0){
        cout << "0.00%";
        return 0;
    }
    if(N < 0){
        count *= 1.5;
    }
    if(llabs(N) % 2 == 0){
        count *= 2;
    }
    count *= 100;
    count /= l;
    cout << fixed <<  setprecision(2) << count << "%";
    return 0;
}//精度不够，long long 只有18位；要用字符串写