#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin >> input;
    if(input.size() == 4){
        string cut1 = input.substr(0,2);
        int cut1_int = stoi(cut1);
        string cut2 = input.substr(2,2);
        if(cut1_int < 22){
            cout << 20 << cut1 << "-" << cut2;
        }
        else{
            cout << 19 << cut1 << "-" << cut2;
        }
    }
    else{
        string cut1 = input.substr(0,4);
        string cut2 = input.substr(4,2);
        cout << cut1 << "-" << cut2;
    }
    return 0;
}