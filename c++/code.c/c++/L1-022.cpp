#include<iostream>
#include<string>
using namespace std;
int main(){
    int count1 = 0;
    int count2 = 0;
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        if(a % 2 == 0){
            count2++;
        } 
        else{
            count1++;
        }
    }
    cout << count1 << " " << count2;


}