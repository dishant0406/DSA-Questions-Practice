#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n){
	int count  =0;
	while(n>0){
		count+=(n&1);
		n=(n>>1);
	}

	return count;
}

int countSetBitsHack(int n){
	int count=0;
	while(n>0){
		n = n&(n-1);
		count++;
	}
	return count;
}

int main(){
	int n;
	cin>>n;
	cout<<countSetBitsHack(n)<<endl;
	return 0;
}