#include <bits/stdc++.h>
using namespace std;

int main(){
	int sum;
	cin>>sum;
	vector<int> v{10,5,2,3,-6,9,11};

	for(int i=0;i<v.size();i++){
		int toFind = sum-v[i];

		for(int j=i+1;j<v.size();j++){
			if(v[j]==toFind){
				cout<<v[i]<<", "<<v[j]<<endl;
			}
		}
	}

	return 0;
	
}