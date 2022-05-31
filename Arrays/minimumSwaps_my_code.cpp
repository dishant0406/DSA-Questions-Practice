#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v{10,11,5,4,3,2,1};

	unordered_map<int, int> sortmap;

	vector<int> sortedV = v;
	sort(sortedV.begin(), sortedV.end());

	for(int i=0;i<v.size();i++){
		sortmap[sortedV[i]] = i;
	}

	for(auto x : sortmap){
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}