#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v{1,2,3,4,5,8,6,7,9,10,11};

	int largest = INT_MIN;
	int smallest = INT_MAX;
	vector<int> result;

	for(int i=0;i<v.size();i++){
		if(i==0){
			if(v[i] < v[i+1]) {
				continue;
			}
			else{
				largest = max(largest, v[i]);
				smallest = min(smallest, v[i]);
				continue;
			}
		}

		if(i==v.size()-1){
			if(v[i]>v[i-1]){
				continue;
			}
			else{
				largest = max(largest, v[i]);
				smallest = min(smallest, v[i]);
				continue;
			}
		}

		if(v[i]<v[i+1] and v[i]>v[i-1]){
			continue;
		}
		largest = max(largest, v[i]);
		smallest = min(smallest, v[i]);
	}

	if(smallest == INT_MAX){
		cout<<"sorted array"<<endl;
	} 

	for(int i=0;i<v.size();i++){
		if(smallest < v[i]){
			result.push_back(i);
			break;
		}

	}

	for(int i=v.size()-1;i>=0;i--){
		if(largest>v[i]){
			result.push_back(i);
			break;
		}
	}


	for(auto x:result){
		cout<<x<<", ";
	}
	return 0;
}