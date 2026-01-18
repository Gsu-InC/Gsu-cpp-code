#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    int sum = 0;
    vector<int> l;
    for(int i=A;i<=B;i++){
        sum += i;
    }
    int d = abs(A - B)+1;
    for(int i=1;i<=d;i++){
        l.push_back(A-1+i);//vector要用push_back加入元素
    }
    for(int i=1;i<=d;i++){
        cout << setw(5) << setfill(' ') << l[i-1];
        if(i % 5 == 0){
            cout << endl;
        }
    }
    if(d % 5 != 0){
        cout << endl <<"Sum = " << sum;
    }
    else{
        cout << "Sum = " << sum;
    }
    return 0;
}