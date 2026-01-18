#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    while(true){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        else{
            arr.push_back(n);
        }
    }
    reverse(arr.begin(),arr.end());
    for(size_t i=0;i<arr.size();i++){
        if(i>0){
            cout << " ";
        }
        cout << arr[i];
    }
    return 0;
}