#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v{1,2,3,4,5,6,7,8,9,15};

	int sum;
	cin>>sum;

	sort(v.begin(), v.end());

	for(int i=0;i<=v.size()-3;i++){
		int calsum = sum-v[i];
		int sp=i+1;
		int ep= v.size()-1;

		while(sp<ep){
			if(calsum > v[sp]+v[ep]){
				sp=sp+1;
			}
			else if(calsum < v[sp]+v[ep]){
				ep=ep-1;
			}
			else{
				cout<<v[i]<<", "<<v[sp]<<", "<<v[ep]<<endl;
				sp=sp+1;
				ep=ep-1;
			}
		}
	}
	return 0;
}