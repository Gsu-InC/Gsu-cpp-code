#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string shi;
        getline(cin,shi);
        int count1 = 0;
        int countblank = 0;
        int countstr = 0;
        for(char c : shi){
            if(c != ','){
                count1++;
            }
            else{break;}    
        }
        int count2 = shi.size();
        for(int j=count2-1;j>=0;j--){
            if(shi[j] == ' '){
                countblank++;
            }
            if(countblank == 3){
                break;
            }
            countstr++;
        }
        int realcountstr = shi.size() - countstr;
        
        if(count1 >= 3 && count2 >= 4){
            string end1 = shi.substr(count1-3,3);
            string end2 = shi.substr(count2-4,3);
            string cutstr = shi.substr(0,realcountstr);
            if( end1 == "ong" and end2 == "ong"){
                cout << cutstr << "qiao ben zhong." << endl;
            }
        
            else{
                cout << "Skipped" << endl;
            }
        }
        else{
            cout << "Skipped" << endl;
        }
    }
    return 0;

}