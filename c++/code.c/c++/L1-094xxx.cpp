// 应当使用insert插入剪切后的子字符串
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string orign;
//     int n;
//     cin >> orign >> n;
//     for(int i=0;i<n;i++){
//         int sta,en;
//         string qian,hou;
//         cin >> sta >> en >> qian >> hou;
//         int d = en - sta;
//         int l = d + 1;
//         string cut = orign.substr(sta-1,l);
//         orign.erase(sta-1,l);
//         int it1,it2;
//         if(orign.find(qian) == string::npos || orign.find(hou) == string::npos){
//             orign += cut;
//         }
//         else{
//             it1 = orign.find(qian);
//             it2 = orign.find(hou);
//             string qians = orign.substr(0,it1 + qian.size()-1);
//             string hous = orign.substr(it2,orign.size() - it2 - 1);
//             orign = qians + cut + hous;           
//             }
//     }
//     cout << orign;
//     return 0;
// }

