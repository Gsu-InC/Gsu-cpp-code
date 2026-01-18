#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string str;
    cin >> n;
    cin.ignore();
    getline(cin,str);
    int len = str.size();
    int line;
    int mod = len % n;
    int max;
    if(mod == 0){
        line = len / n;
        max = line * n - 1;
    }
    else{
        line = len / n + 1;
        max = (line-1) * n + mod - 1;
    }
    for(int i=0;i<n;i++){
        for(int j=line;j>=1;j--){
            int pos = (j-1) * n + i;
            if(pos <= max){
                cout << str[pos];
            }
            else{
                cout << " ";
            }                
        }
        cout << endl;
    }
    return 0;
}