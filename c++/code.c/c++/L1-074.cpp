#include<iostream>
using namespace std;
int main(){
    int N,K,M;
    cin >> N >> K >> M;
    int km = K * M;
    int result = N - km;
    cout << result;
}