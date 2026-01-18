#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int countl = 0;
    int counth = 0;
    vector<int> have;
    while(true){
        string input;
        getline(cin,input);
        if(input == "."){
            break;
        }
        countl++;
        if(input.find("chi1 huo3 guo1") != string::npos){
            have.push_back(countl);
            counth++;
        }
    }
    if(counth == 0){
        cout << countl << endl << "-_-#";
    }
    else{
        cout << countl << endl;
        cout << have[0] << " " << counth;
    }
    return 0;
}
