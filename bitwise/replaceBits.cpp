#include <bits/stdc++.h>
using namespace std;

int clearRangeItoJ(int n,int j, int i ){
	int a = -1<<(j+1);
	int b = (1<<i) -1;
	return n & (a|b);
}

int replaceBits(int n, int j, int i, int replaceNumber){
	n = clearRangeItoJ(n, j, i);
	return n | (replaceNumber<<i);
}

int main(){
	cout<<replaceBits(15, 3, 1, 2)<<endl;


	return 0;
}