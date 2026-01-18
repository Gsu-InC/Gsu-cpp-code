#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    int l = input.size();
    int count6 = 0;
    for(int i=0;i<l;i++){
        if(input[i] == '6'){
            count6++;
        }
        else{
            if(count6 > 9){
                cout << 27;
            }
            else if(count6 > 3){
                cout << 9;
            }
            else{
                for(int j=0;j<count6;j++){
                    cout << 6;
                }
            }
        cout << input[i];
        count6 =0;
        }
    }
    if(count6 > 0){                 //注意结尾处理多余count6的位置
            if(count6 > 9){
                cout << 27;
            }
            else if(count6 > 3){
                cout << 9;
            }
            else{
                for(int j=0;j<count6;j++){
                    cout << 6;
                }
            }
        }
    return 0;
}