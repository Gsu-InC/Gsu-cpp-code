#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,M;
    vector<int>zhunkao;
    vector<int>shi;
    vector<int>real;
    cin >> N;
    for(int i=0;i<N;i++){
        int x,y,z;
        cin >> x >> y >> z;
        zhunkao.push_back(x);
        shi.push_back(y);
        real.push_back(z);
    }
    cin >> M;
    vector<int>a;
    for(int i=0;i<M;i++){
        int s;
        cin >> s;
        a.push_back(s);
        
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(a[i] == shi[j]){
                cout << zhunkao[j] << " " << real[j] << endl;
            }
        }
    }
    return 0;
}//ÄÚ´æ³¬ÏÞ