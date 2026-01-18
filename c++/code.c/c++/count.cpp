#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=0;
    }
     if(n!=0){
        while(n>0){
            int delight = n%10;
            a[delight]++;
            n/=10;    
        }
        for (int i=0;i<10;i++){
            if(a[i] != 0){
                cout << i << ":" << a[i] << endl;
        }
    }
}
    else{
        cout << 0 <<":" << 1 <<endl;
    }
}//错因：int只能读取10位以内的数
// 更正：改为字符串输入