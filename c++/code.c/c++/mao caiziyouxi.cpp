#include<iostream>
using namespace std;
int main(){
    int g,n;
    cin >> g >> n;
    int count = 0;
    for(int i=1;i<=n;i++){
        int input;        
        cin >> input;
        if(input == g){
            if(i == 1){
                cout << "Bingo";
            }
            else if(i <= 3){
                cout << "Lucky You";
            }
            else{
                cout << "Good Guess!";
            }
            count++;
        }
        if(input < g && input >= 0){
            cout << "Too Small" << endl;
        }
        if(input > g){
            cout << "Too Big" << endl;
        }
        if( g < 0){
            cout << "Game Over" << endl;
            count++;
            break;
        }
    }
    if(count == 0){
        cout << "Game Over";
    }
}