#include<iostream>
#include<iomanip>
#include<set>
#include<string>
using namespace std;
int main(){
    long long y,n;
    cin >> y >> n;
    long long current = y;
    while(true){
        string year_c = to_string(current);
        while(year_c.length()<4){
            year_c = "0" + year_c;
        }
        set<char> digits;
        for(char c : year_c){
            digits.insert(c);
        } 
        if( digits.size() == (unsigned int)n ){              //set容器长度用size
            int gap = current - y;
            cout << gap << " " << setw(4) << setfill('0') << current;// setfill中的字符加单引号
            break;
        }
        current++;
    }   



}