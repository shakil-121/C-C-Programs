#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int l,w;
	if(n&1)
		cout<<1<<" "<<n<<endl;
	else{
		l=sqrt(n);
		w=n/l;
		cout<<l<<" "<<w;
	}
	return 0;
}
