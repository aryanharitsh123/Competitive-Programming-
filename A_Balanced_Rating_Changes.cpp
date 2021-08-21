#include <iostream>
using namespace std;
 
int main(){
	int n, x, l = 1;
	cin >> n;
	while(n--){
		cin >> x;
		if(x % 2 == 0) cout << x/2 << endl;
		else  cout << (x + l)/2 << endl, l *= -1;
	}
}