#include<iostream>
using namespace std;
int main(){
    int g,m,r;
    int solution = 0;
    int res_g = -1;
    int res_m = -1;
    int mindelta = 100000000;
    cin >> g >> m >> r;
    for(int i=1;i<=r;i++){
        if(g % i == 0 and m % (r-i) == 0){
            int avgg = g / i;
            int avgm = m / (r - i);
            int delta = abs(avgg - avgm);
            if(avgg >=2 && avgm >=2){
                if(delta < mindelta){
                    mindelta = delta;
                    res_g = i;
                    res_m = r-i;
                        solution++;
                }
            }
        }
    }
    if(solution == 0){
        cout << "No Solution";
    }
    else{
        cout << res_g << " " << res_m;
    }
    return 0;
}//不被采用不代表没方案