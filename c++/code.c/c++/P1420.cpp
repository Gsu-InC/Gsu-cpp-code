#include<iostream>
#include<vector>
using namespace std;
int main(){
    int max_c = 1;
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for(int i=0;i<n;i++){
        int j = i;
        int count = 1;
        while(v[j]+1 == v[j+1]){
            count++;
            j++;
        }
        if(count > max_c){
            max_c = count;
        }
    }
    cout << max_c;
    return 0;
}