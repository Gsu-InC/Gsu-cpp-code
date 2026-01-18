#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,int> mp;
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
            string temp;
            cin >> temp;//要把k=1时的输入读取掉！！！
        }
    }
    int m;
    bool one = false;
    cin >> m;
    map<string,int> counter;//一段时间后复盘发现不知道这个counter有什么用,再看了一遍发现是防止多次查询。
    for(int i=0;i<m;i++){
        string t;
        cin >> t;
        if(mp.find(t) == mp.end() && counter.find(t) == counter.end()){
            if(one){
                cout << " ";
            }
            one = true;
            cout << t;
            counter.insert({t,1});
        }
    }
    if(!one){
        cout << "No one is handsome";
    }
    return 0;
}