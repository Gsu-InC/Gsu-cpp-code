//// 最佳解法：用二维string数组
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int n;
//     char c;
//     cin >> c >> n;
//     cin.ignore();
//     int arr[100][100];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             string input;
//             getline(cin,input);
//             if(input == " "){
//                 arr[i][j] == 0;
//             }
//             else{
//                 arr[i][j] == 1;
//             }
//         }
//     }
//     bool budao = true;
//     for(int i=n-1;i>=0;i--){
//         for(int j=n-1;j>=0;j--){
//             if(arr[i][j] != arr[i][n-1-j]){
//                 budao = false;
//             }
//         }
//     }
//     if(budao){
//         cout << "bu yong dao le";
//     }
//     for(int i=n-1;i>=0;i--){
//         for(int j=n-1;j>=0;j--){
//             if(arr[i][j] == 0){
//                 cout << " ";
//             }
//             else{
//                 cout << c;
//             }
//             if(j = 0){
//                 cout << endl;
//             }
//         }
//     }
//     return 0;
// }