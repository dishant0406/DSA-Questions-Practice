#include <bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
	//power of two number & (power of two number -1) = 0
	//example
	//16 ->        10000
	//16-1 = 15 -> 01111
	//             -----
	//&         -> 00000
	//             -----
	bool isPowerOfTwo = (n&(n-1))?false:true;
	return isPowerOfTwo;
}

int main(){
	int n;
	cin>>n;
	cout<<powerOfTwo(n);
	return 0;
}