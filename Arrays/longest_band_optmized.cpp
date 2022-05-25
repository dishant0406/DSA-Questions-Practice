#include <bits/stdc++.h>
using namespace std;

int largestBand(vector<int> arr){
	int n= arr.size();
	int largestlen =0;
	unordered_set <int> s;

	for(int x: arr){
		s.insert(x);
	}

	//itrate over the arr
	for(auto element: s){
		int parent = element -1;

		if(s.find(parent)==s.end()){
			//find the entire band /chain starting from element
			int next_no = element+1;
			int cnt = 1;

			while(s.find(next_no) != s.end()){
				next_no++;
				cnt++;
			}

			if(cnt> largestlen){
				largestlen =cnt;
			}
		}
	}

	return largestlen;
}

int main(){
		vector<int> v{1,9,3,0,18,5,2,4,10,7,12,6};
		cout<<largestBand(v);
	return 0;
}