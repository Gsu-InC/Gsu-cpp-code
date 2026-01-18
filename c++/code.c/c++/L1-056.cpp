#include<iostream>
#include<string>
#include<map>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string name;
        int shu;
        cin >> name >> shu;
        mp.insert({name,shu});
    }
    string closest_str;
    int sumn = 0;
    for(const auto& element : mp){
        sumn += element.second;
    }
    double averagen = sumn / n;
    double stander = averagen / 2;
    double delte = 100;
    for(const auto& element : mp){
        double tempdelte = abs(element.second - stander);
        if(tempdelte < delte){
            closest_str = element.first;
            delte = tempdelte;
        }
    }
    cout << fixed << setprecision(0) << stander <<" " << closest_str;
    return 0;

}