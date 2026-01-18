#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    cin.ignore();
    vector<string> v;
    for(int i=0;i<n;i++){
        string qi;
        getline(cin,qi);
        if(qi.find("qiandao") == string::npos && qi.find("easy") == string::npos){
            v.push_back(qi);
        }
    }
    if((int)v.size() > m){
        cout << v[m];
    }
    else{
        cout << "Wo AK le";
    }
    return 0;
}