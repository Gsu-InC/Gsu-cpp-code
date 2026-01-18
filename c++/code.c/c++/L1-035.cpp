#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> list;
    string c;
    while(cin >> c){       
     if( c == "."){ // string = 要用双引号
            break;
        }
        list.push_back(c);
    }
    //vector  不用指针
    //auto it_2 = list.begin()+1;
    //auto it_14 = list.begin()+13;

    if(list.size() >= 14){
        cout << list[1] << " and " << list[13] << " are inviting you to dinner...";
    } 
    else if(list.size()  >=2 ){
        cout << list[1] << " is the only one for you...";
    }
    else{
        cout << "Momo... No one is for you ...";
    }
}