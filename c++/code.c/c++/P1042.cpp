#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main(){
    int count11[2] = {0};
    int count21[2] = {0};
    vector<pair<int,int>> r11;
    vector<pair<int,int>> r21;
    while(true){
        char c;
        cin >> c;
        if(c == 'E'){
            break;
        }
        if(c == 'W'){
            count11[0]++;
            count21[0]++;
        }
        else{
            count11[1]++;
            count21[1]++;
        }
        if((count11[0] >= 11 || count11[1] >= 11)){
            if(abs(count11[0]-count11[1]) >= 2){
                r11.push_back({count11[0],count11[1]});
                count11[0] = 0;
                count11[1] = 0;
            }
        }
        if((count21[0] >= 21 || count21[1] >= 21) && abs(count21[0]-count21[1]) >= 2){
            r21.push_back({count21[0],count21[1]});
            count21[0] = 0;
            count21[1] = 0;
        }
    }
    for(size_t i=0;i<r11.size();i++){
        cout << r11[i].first << ":" << r11[i].second << endl;
    }
    if(count11[0] != 0 || count11[1] != 0){
        cout << count11[0] << ":" << count11[1] << endl;
    }
    cout << endl;
    for(size_t i=0;i<r21.size();i++){
        cout << r21[i].first << ":" << r21[i].second << endl;
    }
    if(count21[0] != 0 || count21[1] != 0){
        cout << count21[0] << ":" << count21[1] << endl;
    }
    return 0;
}//如果最后一句没打要输出0:0
