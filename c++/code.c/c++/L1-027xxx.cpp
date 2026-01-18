#include<iostream>
#include<string>
#include<set>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    set<char> arrs;
    string number;
    cin >> number;
    for(char c : number){
        arrs.insert(c);
    }
    for()
    reverse(arr.begin(),arr.end());
    int l1 = number.size();
    int l2 = arrs.size();
    int index[11];
    for(int i=0;i<l1;i++){
        for( int j=0;j<l2;j++){
            if(number[i] == arr[j]){
                index[i] = j;
            }
        }
    }
    cout << "int[] arr = new int[]{";
    for(int i = 0;i < l2;i++){
        if(i>0){
            cout << ",";
        }
        cout << arr[i]; 
    }
    cout << "}" << endl << "int[] index = new int[]{";
    for(int i=0;i<l1;i++){
        if(i>0){
            cout << ",";
        }
        cout << index[i];
    }
    cout << "}";
    return 0;
}
