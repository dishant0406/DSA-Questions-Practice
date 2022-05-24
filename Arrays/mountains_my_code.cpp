#include <bits/stdc++.h>
using namespace std;

int main(){

	vector<int> v{875,884,239,731,723,685};
		int maxHeight = 0;
	for(int i=1;i<v.size();i++){
		
		if(v[i-1]<v[i] && v[i+1]<v[i]){
			int j=i;
			int backCount = 0;
			while(v[j]>v[j-1]){
				backCount++;
				j--;
			}
			int frontCount =0;
			while(v[i]>v[i+1]){
				frontCount++;
				i++;

			}

			if(maxHeight<backCount+frontCount){
				maxHeight = backCount+frontCount +1;
			}
		}

	}

	cout<<maxHeight<<endl;

	return 0;
}