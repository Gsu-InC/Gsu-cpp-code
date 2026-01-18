#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    cin.ignore();
    vector<string> q;
    for(int i=0;i<n;i++){
        string input;
        getline(cin,input);
        q.push_back(input);
    }
    int countskip = 0;
    int countdone = 0;
    for(int i=0;i<=n;i++){                        //多循环一次输出AK
        if(countdone + countskip == n){
            cout << "Wo AK le";
            break;
        }
        if(q[i].find("qiandao") != string::npos || q[i].find("easy") != string::npos){
            countskip++;
        }
        else if(q[i].find("qiandao") == string::npos || q[i].find("easy") == string::npos){
            countdone++;
        }
        if(countdone == m + 1){
            cout << q[i];
            break;
        }
    }
}