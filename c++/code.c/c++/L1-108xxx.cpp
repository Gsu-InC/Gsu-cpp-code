#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	int e = 0;
	long long s = 1;
	while(s < n){
		s *= 2;
		e++;
	}
	long long ans = 1;
	for(int i=0;i<e-1;i++){
		ans *= 2;
	}
	cout << ans;
	return 0;
}