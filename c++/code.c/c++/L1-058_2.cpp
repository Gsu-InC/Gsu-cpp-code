#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    int count6 = 0;
    for(char c : input){
        if(c == '6'){
            count6++;
        }
        else{
            if(count6 > 9){
                cout << 27;
                count6 = 0;
            }
            else if(count6 > 3){
                cout << 9;
                count6 =0;
            }
            else{
                for(int j=0;j<count6;j++){
                    cout << 6;
                }
                count6 = 0;
            }
                
                cout << c;
            }
        }
    if(count6 > 9){
        cout << 27;
        count6 = 0;
    }
    else if(count6 > 3){
        cout << 9;
        count6 =0;
    }
    else{
        for(int j=0;j<count6;j++){
            cout << 6;
            }
        count6 = 0;
        }
    return 0;
}///NICE!!!