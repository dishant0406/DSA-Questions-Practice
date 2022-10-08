//subarrays with sum as the given number

#include <bits/stdc++.h>
using namespace std;

void subArraySum(vector<int> arr, int n){
	int i=0;
	int j=0;
	int sum =0;
	int windowSize = INT_MAX;
	int smallestI = 0;
	int smallestJ = 0;

	while(j<int(arr.size())){

		sum=sum+arr[j];
		j++;

		while(sum>n and i<j){
			sum=sum-arr[i];
			i++;
		}

		if(sum==n){
			cout<<i<<" "<<j-1<<endl;
			if((j-i-1)<windowSize){
				windowSize = j-i-1;
				smallestI = i;
				smallestJ=j-1;
			}

		}
	}

	cout<<"Smallest window is: "<<smallestI<<" "<<smallestJ<<endl;
	
}

int main(){
	vector<int> arr{1,3,2,1,4,1,3,2,1,1,2};
	subArraySum(arr, 8);

	return 0;
}