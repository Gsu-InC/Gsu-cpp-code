#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string in;
        cin >> in; 
        string f1 = in.substr(0,1);
        string f2 = in.substr(1,1);
        string f3 = in.substr(2,1);
        string f4 = in.substr(3,1);
        string f5 = in.substr(4,1);
        string f6 = in.substr(5,1);
        int f1_str = stoi(f1);
        int f2_str = stoi(f2);
        int f3_str = stoi(f3);
        int f4_str = stoi(f4);
        int f5_str = stoi(f5);
        int f6_str = stoi(f6);
        if(f1_str + f2_str + f3_str == f4_str + f5_str + f6_str){
            cout << "You are lucky!" << endl;
        }
        else{
            cout << "Wish you good luck." << endl;
        }
    }
    return 0;
}