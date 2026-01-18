#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int localt = n*5;
    int luogut = n*3+11;
    if(localt < luogut){
        cout << "Local";
    }
    else{
        cout << "Luogu";
    }
    return 0;
}