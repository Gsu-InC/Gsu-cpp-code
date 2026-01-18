#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    char c;
    cin >> c >> n;
    vector<string> v;
    cin.ignore();
    for(int i=0;i<n;i++){
        string str;
        getline(cin,str);
        v.push_back(str);
    }
    bool buyongdao = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] == ' '){
                v[i][j] = '0';
            }
            else{
                v[i][j] = '1';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] != v[n-i-1][n-j-1]){
                buyongdao = false;
            }
        }
    }
    if(buyongdao){
        cout << "bu yong dao le" << endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(v[i][j] == '0'){
                cout << " ";
            }
            else{
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;


}