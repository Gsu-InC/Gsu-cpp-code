#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> s;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        s.push_back({a,b,c});
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(s[i][0]-s[j][0])<=5&&abs(s[i][1]-s[j][1])<=5&&abs(s[i][2]-s[j][2])<=5){
                int total1 = s[i][0]+s[i][1]+s[i][2];
                int total2 = s[j][0]+s[j][1]+s[j][2];
                if(abs(total1-total2)<=10) count++;
            }
        }
        
    }
    cout << count;
    return 0;
}