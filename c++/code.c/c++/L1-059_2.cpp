#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string temp;
        getline(cin,temp);
        string cut1,cut2;
        int pos1 = temp.find(",");
        int len = temp.size();
        int len1 = pos1;
        int len2 = len - len1 - 1;
        cut1 = temp.substr(0,len1);
        cut2 = temp.substr(pos1+1,len2);
        string end1,end2;
        if(len1 >=3 && len2 >= 4){
            end1 = cut1.substr(len1-3,3);
            end2 = cut2.substr(len2-4,3);
            if(end1 == "ong" && end2 == "ong"){
                string front;
                int countblank = 0;
                int lenb = 0;
                for(int i=len-1;i>=0;i--){
                    if(temp[i] == ' ' && countblank <3){
                        countblank++;
                    }
                    lenb++;
                    if(countblank == 3){
                        break;
                    }
                    
                }
                front = temp.substr(0,len-lenb);
                cout << front << " qiao ben zhong." << endl;
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
}//NICE!!!!