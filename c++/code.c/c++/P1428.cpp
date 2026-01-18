#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin >> n;
    vector<int> count(n,0);
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[j] < v[i]){
                count[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(i>0){
            cout << " ";
        }
        cout << count[i];
    }
    return 0;
}