#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string color;
    for(int i=0;i<n;i++){
        char c;
        cin >> c;
        color += c;
    }
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        bool yn = true;
        bool guess = false;
        string c_str;
        for(int j=0;j<n;j++){
            char c;
            cin >> c;
            if(c != '0'){
                guess = true;
                if( c != color[j]){
                    yn = false;
                }
            }
        }
        if(yn && guess){
            cout << "Da Jiang!!!";
        }
        else{
            cout << "Ai Ya";
        }
        cout << endl;
    }
    return 0;

}