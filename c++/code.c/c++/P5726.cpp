#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> score;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        score.push_back(temp);
    }
    sort(score.begin(),score.end());
    double l = score.size();
    double sum = 0;
    for(int i=1;i<l-1;i++){
        sum += score[i];
    }
    double avg = sum/(l-2);
    cout << fixed << setprecision(2) << avg;
    return 0;
}