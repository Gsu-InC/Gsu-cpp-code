#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        if(k != 1){
            for(int j=0;j<k;j++){
                string str;
                cin >> str;
                mp.insert({str,1});
            }
        }
        else{
            string tempstr;
            cin >> tempstr;
        }
    }
    bool none = true;
    unordered_map<string,int> counter;
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        string input;
        cin >> input;
        if(mp.find(input) == mp.end() && counter.find(input) == counter.end()){
            if(!none){
                cout << " ";
            }
            cout << input;
            counter.insert({input,1});
            none = false;
        }
    }
    if(none){
        cout << "No one is handsome";
    }
    return 0;
}//²»ÒªÍü¼Çcin!!!