#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> q;
    int n,m;
    cin >> n >> m;
    cin.ignore();
    for(int i=0;i<n;i++){
        string input;
        getline(cin,input);
        q.push_back(input);

    }
    int counts = 0;
    int countn = 0;
    for(int i=0;i<n;i++){
        if(q[i].find("qiandao") != string::npos || q[i].find("easy") != string::npos){
            counts++;
        }
        else if(q[i].find("qiandao") == string::npos || q[i].find("easy") == string::npos){
            countn++;
        }
        if(countn == m+1){
            cout << q[i];
            break;
        }
    }
    if(countn + counts == n){
        cout << "Wo AK le";
    }
    return 0;
}