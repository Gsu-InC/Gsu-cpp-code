#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin >> str;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int b,e;
        string front,back;
        cin >> b >> e >> front >> back;
        int l = e-b+1;
        int realb = b-1;
        string cut = str.substr(realb,l);
        str.erase(realb,l);
        int lf = front.size();
        int lb = back.size();
        int ls = str.size();
        int pos = -1;
        for(int i=0;i<ls-lb-lf;i++){//i只需保证历遍且不超出范围
            if(str.substr(i,lf)==front && str.substr(i+lf,lb) == back){
                pos = i+lf;
                break;//一定要跳出避免两个位置的情况
            }
        }
        if(pos != -1){
            str.insert(pos,cut);
        }
        else{
            str += cut;
        }
    }
    cout << str;
    return 0;
}