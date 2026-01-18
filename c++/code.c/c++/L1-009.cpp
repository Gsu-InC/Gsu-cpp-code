#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    long long  fenzi,fenmu;
    int n;
    cin >> n;
    string first;
    cin >> first;
    int f1 = first.find('/');
    int fm1 = first.size() - f1;
    string fenzi1 = first.substr(0,f1);
    string fenmu1 = first.substr(f1+1,fm1);
    fenzi = stoll(fenzi1);
    fenmu = stoll(fenmu1);
    for(int i=0;i<n-1;i++){
        long long fenzi2,fenmu2;
        string second;
        cin >> second;
        int f2 = second.find('/');
        int fm2 = second.size() - f2;
        string fenzi2_str = second.substr(0,f2);
        string fenmu2_str = second.substr(f2+1,fm2);
        fenzi2 = stoll(fenzi2_str);
        fenmu2 = stoll(fenmu2_str);
        fenzi = fenzi * fenmu2 + fenzi2 * fenmu;
        fenmu = fenmu * fenmu2;
        long long maxe = max(abs(fenzi),abs(fenmu));
        for(int j=2;j*j<maxe;j++){
            if(abs(fenzi) % j == 0 && abs(fenmu) % j == 0){
                fenzi /= j;
                fenmu /= j;
                j--;
            }
        }
    }
    if(fenzi == 0){
        cout << 0;
    }
    else if(fenmu < fenzi && abs(fenzi) % abs(fenmu) == 0){
        cout << fenzi/fenmu;
    }
    else if(fenmu < fenzi && abs(fenzi) % abs(fenmu) != 0){
        long long zhengshu = fenzi/fenmu;
        fenzi = fenzi - zhengshu * fenmu;
        cout << zhengshu << " " << fenzi << "/" << fenmu;
    }
    else if(fenmu == fenzi){
        cout << 1;
    }
    else{
        cout << fenzi << "/" << fenmu;
    }
    return 0;
}