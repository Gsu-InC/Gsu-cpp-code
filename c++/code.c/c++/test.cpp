#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    long n;
    cin >> n;
    vector<int> a(n,0);
    for(int i=2;i<=n;i++){
        if (n % i == 0 ){
        a[i]++;
        n /= i;    
        cout << i << endl;
        i = 1;
        }
    }
}
    