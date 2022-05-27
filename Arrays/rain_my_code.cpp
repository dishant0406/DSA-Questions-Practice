#include <bits/stdc++.h>
using namespace std;

int main(){

	vector<int> v{0,1,0,2,1,0,1,3,2,1,2,1};

	//array to store max till now from left
	vector<int> left(v.size(), 0);

	//array to store max till now from right
	vector<int> right(v.size(), 0);

	left[0] = v[0];
	right[v.size()-1] = v[v.size()-1];

	//filling the left array with max till now
	for(int i=1;i<v.size();i++){
		left[i] = max(left[i-1], v[i]);		
	}

	//filling the right array with max till now
	for(int i=v.size()-2;i>=0;i--){
		right[i] = max(right[i+1], v[i]);
	}

	//total height of water stored
	int height = 0;

	//calculating water stored
	for(int i=0;i<v.size();i++){
		height = height + (min(left[i], right[i]) - v[i]);
	}

	cout<<height<<endl;

	return 0;
}