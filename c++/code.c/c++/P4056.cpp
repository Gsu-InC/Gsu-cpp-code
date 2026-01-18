#include<iostream>
#include<unordered_map>
using namespace std;
 int main(){
    int n;
    cin >> n;
    unordered_map<int,int> mp;
    int x;
    bool found = false;
    for(int i=100;i>0;i--){
        x=i;
        int k = 1;
        while(true){
            int sum = (7*x+21*k)*52;
            if(sum > n){
                break;
            }
            else if(sum == n){
                mp.insert({x,k});
                found = true;
                break;
            }
            else{
                k++;
            }
        }
        if(found){
            break;
        }
    }
    for(auto it:mp){
        cout << it.first << endl << it.second;
    }
    return 0;
 }