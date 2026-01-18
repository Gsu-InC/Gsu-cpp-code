#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> mv;
    for(int i=0;i<N;i++){
        int t;
        cin >> t;
        mv.push_back(t);
    }
    auto max = max_element(mv.begin(),mv.end());
    auto min = min_element(mv.begin(),mv.end());
    int cmax = count(mv.begin(),mv.end(),*max);
    int cmin = count(mv.begin(),mv.end(),*min);
    cout << *min << " " << cmin << endl;
    cout << *max << " " << cmax << endl;
    return 0;
}