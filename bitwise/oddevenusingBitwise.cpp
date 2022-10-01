#include <bits/stdc++.h>
using namespace std;

//BITWISE IMPORTANT POINT
// a<<b = a * 2^b
//a>>b = a/(2^b)

int main(){
	int n;
	cin>>n;

	n&1?cout<<"odd":cout<<"even";	

	cout<<endl;
	return 0;
}