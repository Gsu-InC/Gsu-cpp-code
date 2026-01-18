#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    for(int i=0; i<n; i++){
        string shi;
        getline(cin, shi);
        
        // 检查逗号和句号位置
        size_t comma_pos = shi.find(',');
        size_t dot_pos = shi.find('.');
        
        if(comma_pos == string::npos || dot_pos == string::npos) {
            cout << "Skipped" << endl;
            continue;
        }
        
        // 检查上半句最后一个字是否以"ong"结尾
        string first_part = shi.substr(0, comma_pos);
        size_t last_space_first = first_part.find_last_of(' ');
        string last_word_first = (last_space_first == string::npos) ? first_part : first_part.substr(last_space_first + 1);
        bool first_ok = (last_word_first.length() >= 3 && last_word_first.substr(last_word_first.length()-3) == "ong");
        
        // 检查下半句最后一个字是否以"ong"结尾
        string second_part = shi.substr(comma_pos + 1, dot_pos - comma_pos - 1);
        size_t last_space_second = second_part.find_last_of(' ');
        string last_word_second = (last_space_second == string::npos) ? second_part : second_part.substr(last_space_second + 1);
        bool second_ok = (last_word_second.length() >= 3 && last_word_second.substr(last_word_second.length()-3) == "ong");
        
        if(first_ok && second_ok){
            // 找到下半句中倒数第三个空格的位置
            int space_count = 0;
            int cut_pos = -1;
            
            for(int j = second_part.length()-1; j >= 0; j--){
                if(second_part[j] == ' '){
                    space_count++;
                    if(space_count == 3){
                        cut_pos = j;
                        break;
                    }
                }
            }
            
            if(cut_pos != -1){
                // 替换下半句的最后三个字
                string new_second = second_part.substr(0, cut_pos) + " qiao ben zhong.";
                cout << first_part << "," << new_second << endl;
            } else {
                // 如果下半句不足三个字，直接替换整个下半句
                cout << first_part << "," << " qiao ben zhong." << endl;
            }
        } else {
            cout << "Skipped" << endl;
        }
    }
    
    return 0;
}