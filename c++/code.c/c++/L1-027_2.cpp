#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string numbers;
    string arr;
    string index;
    cin >> numbers;
    arr = numbers;
    sort(arr.begin(),arr.end());
    auto last = unique(arr.begin(),arr.end());
    arr.erase(last,arr.end());
    reverse(arr.begin(),arr.end());
    for(char c : numbers){
        for(size_t i = 0;i<arr.size();i++){
            if(c == arr[i]){
                index += '0' + i;
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
    cout << "};" << endl << "int[] index = new int[]{";
    for(size_t i=0;i<index.size();i++){
        if(i>0){
            cout << ",";
        }
        cout << index[i];
    }
    cout << "};" << endl;
    return 0;
}