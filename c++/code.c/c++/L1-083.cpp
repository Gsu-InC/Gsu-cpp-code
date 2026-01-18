#include<iostream>
using namespace std;
int main(){
    int miny,maxy,y1,y2;
    cin >> miny >> maxy >> y1 >> y2;
    if(y1 < miny){
        if( y2 >= maxy){
            cout << y1 << "-Y " << y2 << "-Y" << endl; 
            cout << "qing 2 zhao gu hao 1";
        }
        else if(y2 >= miny ){
            cout << y1 << "-N " << y2 << "-Y" << endl;
            cout << "2: huan ying ru guan" ;
        }
        else{
            cout << y1 << "-N " << y2 << "-N" << endl;
            cout << "zhang da zai lai ba";
        }
    }
    else if( y1 < maxy){
        if(y2 >= miny){
            cout << y1 << "-Y " << y2 << "-Y" << endl;
            cout << "huan ying ru guan";
        }
        else{
            cout << y1 << "-Y " << y2 << "-N" << endl;
            cout << "1: huan ying ru guan";
        }
    }
    else{
        if(y2 >= miny){
            cout << y1 << "-Y " << y2 << "-Y" << endl;
            cout << "huan ying ru guan";
        }
        else{
            cout << y1 << "-Y " << y2 << "-Y" << endl; 
            cout << "qing 1 zhao gu hao 2";
        }
    }
    return 0;
}