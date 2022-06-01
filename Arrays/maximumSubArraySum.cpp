//MAXIMUM SUBARRAY SUM
//Kadane’s Algorithm

#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v{-1,2,3,4,-2,6,-8,3};

	int maxSum = v[0];
	int currentSum = v[0];

	for(int i=1;i<v.size();i++){
		currentSum = max(v[i], currentSum+v[i]);
		maxSum = max(currentSum, maxSum);
	}

	if(maxSum<0){
		return 0;
	}

	cout<<maxSum<<endl;
	return 0;
}