#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> v;
    
    char c;
    int l;
    cin >> c >> l;
    cin.ignore();
    for(int i=0;i<l;i++){
        string input;
        getline(cin,input);
        v.push_back(input);
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            if(v[i][j] == ' '){
                v[i][j] = '0';
            }
            else{
                v[i][j] = '1';
            }
        }
    }
    bool budaole = true;
    for(int i=0;i<l;i++){
        for(int j=l-1;j>=0;j--){
            if(v[i][j] != v[l-1-i][l-1-j]){
                budaole = false;
                break;
            }
        }
    }
    if(budaole){
        cout << "bu yong dao le" << endl;
    }
    for(int i=l-1;i>=0;i--){
        for(int j=l-1;j>=0;j--){
            if(v[i][j] == '1'){
                cout << c;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}//vector¶þÎ¬Êý×é