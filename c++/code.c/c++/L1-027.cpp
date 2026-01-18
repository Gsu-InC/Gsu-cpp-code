#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string number,arr;
    cin >> number;
    arr = number;
    sort(arr.begin(),arr.end());
    auto last = unique(arr.begin(),arr.end());
    arr.erase(last,arr.end());
    reverse(arr.begin(),arr.end());
    int index[11] = {0};
    for(int i=0;i<11;i++){
        for(size_t j=0;j<arr.size();j++){
            if(arr[j] == number[i]){
                index[i] = j;
            }
        }
    }
    cout << "int[] arr = new int[]{";
    for(size_t i=0;i<arr.size();i++){
        if(i>0){
            cout << ",";
        }
        cout << arr[i];
    }
    cout << "};" << endl <<"int[] index = new int[]{";
    for(int i=0;i<11;i++){
        if(i>0){
            cout << ",";
        }
        cout << index[i];
    }
    cout << "};";
    return 0;
}