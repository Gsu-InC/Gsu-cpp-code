#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        v.push_back(m);
    }
    auto min = min_element(v.begin(),v.end());
    cout << *min;
    return 0;
}