#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int arr[1001] = {0};
    cin >> n;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        for(int j=0;j<k;j++){
            int temp;
            cin >> temp;
            arr[temp]++;
        }
    }
    int* maxone = max_element(arr,arr+1001);//注意max_element和min_element返回迭代器
    int maxindex = 0;
    for(int i=0;i<1001;i++){
        if(arr[i] == *maxone && i>=maxindex){
            maxindex = i;
        }
    }
    cout << maxindex << " " << *maxone;
    return 0;
}//这种用数组更简单
//用map要用