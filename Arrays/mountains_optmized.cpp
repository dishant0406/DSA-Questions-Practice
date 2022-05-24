#include <bits/stdc++.h>
using namespace std;


int longestMountain(vector<int>& arr) {
        int maxHeight = 0;
	for(int i=1;i<=arr.size()-2;i++){
              
		  if(arr.size()<3){
                        return 0;
                }
		if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
			int j=i;
			int backCount = 0;
			while( j>=1 && arr[j]>arr[j-1]){
				backCount++;
				j--;
			}
			while( i<=arr.size()-2 && arr[i]>arr[i+1] ){
				backCount++;
				i++;

			}

			maxHeight = max(maxHeight, backCount+1);
		}
               
                

	}

	return maxHeight;
 }

int main(){

	vector<int> arr{875,884,239,731,723,685};
	cout<<longestMountain(arr)<<endl;

	return 0;
}