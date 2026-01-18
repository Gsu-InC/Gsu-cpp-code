#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count = 0;
    for(size_t i=0;i<str.size();i++){
        if(str[i] != ' '){
            count++;
        }
        if(str[i] == ' ' || i == str.size() - 1){
            cout << count;
            if(i < str.size()-1){
                cout << " ";
                count = 0;
            }
            
        }
    }
    return 0;
}