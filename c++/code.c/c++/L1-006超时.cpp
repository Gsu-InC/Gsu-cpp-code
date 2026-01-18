#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int counter = 0;
    vector<int> c;
    int i = 2;
    while(i < n){
        if( n % i != 0){
            n++;
            counter = c[i];
            counter = 0;
        }
        else{
            counter++;
            n++;
        }

    }
    int i1 = i;
    auto max = max_element(c.begin(),c.end());
    printf("%d/n",max);
    for(size_t j=0;j<c.size();j++){
        if(c[i] != 0){
            for(int r=0;r<c[i];r++){
                if(i1 == i){
                    cout << c[i];
                }
                else{
                    cout << "*" << c[i1];    
                }
                i1++;
            }
        }
    }


}