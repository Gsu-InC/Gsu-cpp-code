#include<iostream>
#include<string>
using namespace std;
int main(){
    int a1,a2,n;
    cin >> a1 >> a2 >> n;
    string a1_str = to_string(a1);
    string a2_str = to_string(a2);
    string ends = a1_str + a2_str;
    int j = 1;
    for(int i = 0;i < n;i++){
        int m = a2 * a1;
        string t = to_string(m);
        ends = ends + t;
        size_t  l = ends.size();
        string a1_;
        string a2_;
        if(t.size() == 1){ 
            a1_ = ends.substr(l-j-1,1);
            a2_ = ends.substr(l-j,1);
        }
        if(t.size() == 2){
            j++;
            a1_ = ends.substr(l-j-1,1);
            a2_ = ends.substr(l-j,1);
        }
        a1 = stoi(a1_);
        a2 = stoi(a2_);
    }
    for(int i=0;i<n;i++){
        if(i>0){
            cout << " ";   
        }
        cout << ends[i];
    }
    return 0;
}