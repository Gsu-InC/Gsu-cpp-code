#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    string input;
    cin >> input;
    map<char,string> list;
    list.insert(make_pair('0',"ling"));
    list.insert(make_pair('1',"yi"));
    list.insert(make_pair('2',"er"));
    list.insert(make_pair('3',"san"));
    list.insert(make_pair('4',"si"));
    list.insert(make_pair('5',"wu"));
    list.insert(make_pair('6',"liu"));
    list.insert(make_pair('7',"qi"));
    list.insert(make_pair('8',"ba"));
    list.insert(make_pair('9',"jiu"));
    if(input[0] == '-'){
        cout << "fu" << " ";
        for(size_t i=1;i<input.size();i++){
            if(i !=input.size() - 1){
            cout << list[input[i]] << " ";}
            else{
                cout << list[input[i]]; 
            }
        }
    }
    else{
        for(size_t i=0;i<input.size();i++){
         if(i !=input.size() - 1){
            cout << list[input[i]] << " ";}
            else{
                cout << list[input[i]]; 
            }
    }
}}