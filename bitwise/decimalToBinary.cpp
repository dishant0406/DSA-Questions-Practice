#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){

	long int number = 0;
	int pow = 1;
	while(n>0){
		number = number + (n&1)*pow;
		n=n>>1;
		pow = pow*10;
	}

	return number;
}

int decimalToBinary2(int n){
	int number = 0;
	int pow =1;
	while(n>0){
		number = number + (n%2)*pow;
		n=n/2;
		pow=pow*10;
	}

	return number;
}

int main(){
	int n;
	cin>>n;
	cout<<decimalToBinary(n)<<endl;
	cout<<decimalToBinary2(n)<<endl;

	return 0;
}