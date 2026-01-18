#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    int a[10] = {0};
    cin >> n;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        a[1] += count(str.begin(),str.end(),'1');
        a[2] += count(str.begin(),str.end(),'2');
        a[3] += count(str.begin(),str.end(),'3');
        a[4] += count(str.begin(),str.end(),'4');
        a[5] += count(str.begin(),str.end(),'5');
        a[6] += count(str.begin(),str.end(),'6');
        a[7] += count(str.begin(),str.end(),'7');
        a[8] += count(str.begin(),str.end(),'8');
        a[9] += count(str.begin(),str.end(),'9');
        str.clear();
    }
    int max = 0;
    for(int i=0;i<10;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << max << endl;
    vector<int> maxs;
    for(int i=0;i<10;i++){
        if(max == a[i]){
            maxs.push_back(i);
        }
    }
    sort(maxs.begin(),maxs.end());
    for(size_t i=0;i<maxs.size();i++){
        cout << maxs[i];
        if(i < maxs.size() - 1){
            cout << " ";
        }
    }
    return 0;
}