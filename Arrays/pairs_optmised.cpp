#include <bits/stdc++.h>
using namespace std;

int main(){
	int sum;
	cin>>sum;
	vector<int> v{10,5,2,3,-6,9,11};

	unordered_set <int> intset;
	for(int i=0;i<v.size();i++){
		if(intset.find(sum-v[i]) == intset.end()){
			intset.insert(v[i]);
		}
		else{
			cout<<v[i]  <<", "<<sum-v[i]<<endl;
		}
	}
	return 0;
}