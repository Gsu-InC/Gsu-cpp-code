#include<iostream>
#include<string>
using namespace std;
int main(){
    string t;
    cin >> t;
    string h = t.substr(0,2);
    string m = t.substr(3,2);
    int t_i = stoi(t);
    int m_i = stoi(m);
    if((0 <= t_i && t_i <=11) || (t_i == 12 && m_i == 0 )){
        cout << "Only " << t <<".  Too early to Dang.";
    }
    else{
        if(m_i == 0){
            for(int i = 0;i <t_i - 12;i++){
                cout << "Dang";
            }
        }
        else{
            for(int i = 0; i<=t_i -12;i++){
                cout << "Dang";
            }
        }
    }
    return 0;
}