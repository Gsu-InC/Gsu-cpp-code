#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string> upw;
    int n;
    cin >> n;
    upw.resize(n);
    for(int i=0;i<n;i++){
        string input;
        cin >> input;
        upw[i] = input;
    }
    int k;
    cin >> k;
    int counter = 0;
    cin.ignore();
    string q;
    getline(cin,q);
    for(int i=0;i<n;i++){
        size_t pos = 0;
        while (q.find(upw[i],pos)!= string::npos){
            counter++;
            pos = q.find(upw[i],pos);
            q.replace(pos,upw[i].size(),"<censored>");
            pos += 10;
        }
    }
    if(counter >= k){
        cout << counter << endl << "He Xie Ni Quan Jia!";
    }
    else{
        cout << q;
    }
    return 0;
}