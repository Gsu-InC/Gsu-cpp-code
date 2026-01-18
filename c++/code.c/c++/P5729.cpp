#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int origin[7] = {0};
    for(int i=0;i<7;i++){
        int temp;
        cin >> temp;
        origin[i] = temp;
    }
    int count[7] = {0};
    for(int i=0;i<n;i++){
        int a,b,c,d,e,f,g;
        cin >> a >> b >> c >> d >> e >> f >> g;
        int count_n = 0;
        for(int j=0;j<7;j++){
            if(origin[j] == a || origin[j] == b || origin[j] == c){
                count_n++;
            }
            else if(origin[j] == d || origin[j] == e || origin[j] == f || origin[j] == g){
                count_n++;
            }
        }
        count[count_n-1]++;
    }
    for(int i=0;i<7;i++){
        if(i > 0) cout << " ";
        cout << count[6-i];
    }
    return 0;
}