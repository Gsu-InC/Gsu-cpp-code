#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    double s1,s2,s3;
    s1 = (x * y) * 0.5;
    s2 = ((100 - x)  * (100 - y)) * 0.5;
    s3 = (100 - x) * y;
    int s = 5000 - s1 - s2 - s3;
    printf("%d",s);

}