#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[5] = {0};
    int d[5] = {0};
    int lowest;
    int fa;
    int counter = 0;
    for(int i=1;i<=4;i++){
        cin >> a[i];
    }
    cin >> lowest >> fa;
    int maxe = a[1];
    if(a[2]>maxe){
        maxe = a[2];
    }
    if(a[3]>maxe){
        maxe = a[3];
    }
    if(a[4]>maxe){
        maxe = a[4];
    }
    for(int i=1;i<=4;i++){
        d[i] = maxe - a[i];
    }
    for(int i=1;i<=4;i++){
        if(a[i] < lowest || d[i] > fa){
            counter++;
        }
    }
    if(counter == 1){
        for(int i=1;i<=4;i++){
            if(a[i] < lowest || d[i] > fa){
                cout << "Warning: please check #" << i << "!";
            }
        }
    }
    else if(counter == 0){
        cout << "Normal";
    }
    else{
        cout << "Warning: please check all the tires!";
    }
    return 0;
}