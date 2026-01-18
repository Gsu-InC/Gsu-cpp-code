#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
 int main(){
    int n;
    cin >> n;
    vector<int> numbers;
    unordered_map<long long,int> adds;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            adds[numbers[i]+numbers[j]]++;
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(adds.find(numbers[i]) != adds.end()){
            count++;
        }
    }
    cout << count;
    return 0;
 }