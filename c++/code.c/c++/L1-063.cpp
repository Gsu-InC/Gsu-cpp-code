#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int gender,height,pound;
        cin >> gender >> height >> pound;
        if( gender == 1){
            if(height < 130){
                cout << "duo chi yu!"<< " ";
            }
            else if(height == 130){
                cout << "wan mei!"<< " ";
            }
            else{
                cout << "ni li hai!" << " ";
            }
            if(pound < 27){
                cout << "duo chi rou!"; 
            }
            else if(pound == 27){
                cout << "wan mei!"; 
            }
            else{
                cout << "shao chi rou!";
            }
       }
        if( gender == 0){
            if(height < 129){
                cout << "duo chi yu!" << " ";
            }
            else if(height == 129){
                cout << "wan mei!" << " ";
            }
            else{
                cout << "ni li hai!" << " ";
            }
            if(pound < 25){
                cout << "duo chi rou!";
            }
            else if(pound == 25){
                cout << "wan mei!";
            }
            else{
                cout << "shao chi rou!";
            }
        }
        cout << endl;    
    }
    return 0;
}