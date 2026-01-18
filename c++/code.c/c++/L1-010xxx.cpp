// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//      vector<long long> a;
//     for( int i=0;i<3;i++){
//         cin >> a[i];
//     }
//     sort(a.begin(),a.end());
//     for(int i=0;i<3;i++){
//         cout << a[i];
//         if(i != 2){
//             cout << "->";
//         }
//     }
// }//Ð´¸öPÑ­»·
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    sort(num,num+3);
        cout << num[0] << "->" << num[1] << "->" << num[2];
    
}