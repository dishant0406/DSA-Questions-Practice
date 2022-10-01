#include <bits/stdc++.h>
using namespace std;

//right shift the number i times so that we get the ith digit at the first place
//take "&" with 1 to get the digit at the first place
int getIthdigit(int n, int i){
	return (n>>i)&1;
}

int main(){
	int n;
	cin>>n;

	int i;
	cin>>i;

	cout<<i<<"'th index of "<<n<<" is "<<getIthdigit(n,i)<<endl;

	return 0;
}