#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    string input;
    int countG = 0;
    int countP = 0;
    int countL = 0;
    int countT = 0;
    cin >> input;
    for(char c : input){
        if(c == 'G' || c == 'g'){
            countG++;
        }
        if(c == 'P' || c == 'p'){
            countP++;
        }
        if(c == 'L' || c == 'l'){
            countL++;
        }
        if(c == 'T' || c == 't'){
            countT++;
        }
    }
    int maxc = max(countG,countP);
    maxc = max(maxc,countL);
    maxc = max(maxc,countT);
    for(int i=0;i<maxc;i++){
        if(countG > 0){
            cout << "G";
            countG--;
        }
        if(countP > 0){
            cout << "P";
            countP--;
        }
        if(countL > 0){
            cout << "L";
            countL--;
        }
        if(countT > 0){
            cout << "T";
            countT--;
        }       
    }
    return 0;
}
