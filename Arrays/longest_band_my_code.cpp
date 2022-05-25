#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v{1,9,3,0,18,5,2,10,7,12,6};

	unordered_set <int> vSet;

	int bandLength =0;

	for(int x: v){
		vSet.insert(x);
	}

	for(int i=0;i<v.size();i++){

		//if found a element less then the current element is present ignore it
		if(vSet.find(v[i]-1)!=vSet.end()){
			continue;
		}

		//if not found
		int band =1;
		int j=v[i]+1;
		while(vSet.find(j) != vSet.end()){
			band++;
			j++;
		}

		bandLength = max(bandLength, band);
	}

	cout<<bandLength<<endl;

	return 0;
}