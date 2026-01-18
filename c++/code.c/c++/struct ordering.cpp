#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
struct student{
    string name;
    string id;
    int score;
    bool operator<(const student& other)const{
        if(score != other.score){
            return score>other.score;
        }
        return name < other.name;
    }
};
int main(){
    int n;
    cin >> n;
    vector<student> students(n); 
    for(int i=0;i<n;i++){
        string str_name;
        string str_id;
        int s_score;
        cin >> str_name >> str_id >> s_score;
        students[i].name = str_name;
        students[i].id = str_id;
        students[i].score = s_score;
    }
    sort(students.begin(),students.end());
    for(int i=0;i<n;i++){
        cout << students[i].name << " " << students[i].id << " " << students[i].score << endl;
    }
    return 0;
}