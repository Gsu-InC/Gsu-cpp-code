#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin >> input;
    string cut = input.substr(0,12);
    string cute = input.substr(12,1);
    int e_int = stoi(cute);
    int j = 1;
    int sum = 0;
    for(int i=0;i<=12;i++){
        if(cut[i]>='0' && cut[i]<='9'){
            int n = cut[i] - '0';
            int n1 = n*j;
            sum += n1;
            j++;
        }
    }
    int real_e = sum % 11;
    if(real_e == e_int){
        cout << "Right";
    }
    else{
        cout << cut << real_e;
    }
    return 0;
}