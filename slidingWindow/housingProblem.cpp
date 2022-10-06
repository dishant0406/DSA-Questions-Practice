//subarrays with sum as the given number

#include <bits/stdc++.h>
using namespace std;

void subArraySum(vector<int> arr, int n){
	int i=0;
	int j=0;
	int sum = arr[0];
	while(j<int(arr.size())){
		if(sum==n){
			// cout<<sum<<endl;
			cout<<"----------------------------"<<endl;
			cout<<i<<", "<<j<<endl;
			cout<<"----------------------------"<<endl;
			j++;
			sum=sum+arr[j];

		}

		else if(sum>n){
			cout<<"sum is "<<sum<<" subtracting "<<arr[i]<<" i is "<<i<<endl;
			sum=sum-arr[i];
			i++;
			cout<<"after subtrating sum is "<<sum<<endl;
			cout<<"----------------------------"<<endl;
		}
		else{
			cout<<"sum is "<<sum<<" adding "<<arr[j+1]<<" j is "<<j<<endl;
			sum=sum+arr[j+1];
			j++;
			cout<<"after add sum is "<<sum<<endl;
			cout<<"----------------------------"<<endl;
		}
		
	}
}

int main(){
	vector<int> arr{1,3,2,1,4,1,3,2,1,1,2};
	subArraySum(arr, 8);

	return 0;
}