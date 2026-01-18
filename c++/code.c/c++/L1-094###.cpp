#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    int n;
    cin >> input >> n;
    for(int i=0;i<n;i++){
        int posb,pose;
        string front,back;
        cin >> posb >> pose >> front >> back;
        int len = pose - posb + 1;
        int posb0 = posb - 1;
        string cut = input.substr(posb0,len);
        input.erase(posb0,len);
        int insert_pos = -1;
        for(int j=0;j < (int)input.size() - (int)front.size() - (int)back.size();j++){
            if(input.substr(j,front.size()) == front){
                if(input.substr(j+front.size(),back.size()) == back){
                    insert_pos = j + front.size();
                    break;
                }
            }
        }
        if(insert_pos != -1){
            input.insert(insert_pos,cut);
        }
        else{
            input +=cut;
        }
    }
    cout << input;
    return 0;



}