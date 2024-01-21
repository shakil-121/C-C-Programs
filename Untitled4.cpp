#include <iostream>
#include <cmath>
using namespace std;
int search(int num1, int n){
	int s = 0;
	int e = 200;

	while(s <= e){
		int mid = (s+e) / 2;
		if(num1 * mid == n){
			return mid;
		}
		else if(num1 * mid > n){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return -1;
}

int main(){
	int n;

	cin >> n;

	for(int num1 = sqrt(n); num1 >= 0; num1--){
		if(num1 * num1 == n){
			cout << num1 << " " << num1;
			break;
		}
		int temp = search(num1, n);

		if(temp > 0){
			cout << num1 << " " << temp << endl;
			break;
		}
	}
	return 0;
}
