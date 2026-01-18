#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        string gender;
        float height;
        cin >> gender >> height;
        if( gender == "F"){
            double best = height*1.09;
            printf("%.2f\n",best);
        }
        else{
            double best = height/1.09;
            printf("%.2f\n",best);
        }
    }
 }
