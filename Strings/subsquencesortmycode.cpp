#include <bits/stdc++.h>
using namespace std;

bool lexcoCompare(string s1, string s2){
	if(s1.length()==s2.length()){
		return s1<s2;
	}
	return s1.length()<s2.length();
}

void subsequenceCalculate(string str, int ptr, vector<string> &collection, string s1){
	if(ptr>str.length()-1){
		collection.push_back(s1);
		return;
	}
	char toadd = str[ptr];
	subsequenceCalculate(str, ptr+1, collection, s1+toadd);
	subsequenceCalculate(str, ptr+1, collection, s1);

}

int main(){
	vector<string> collection;
	string str="abcd";
	int ptr=0;
	subsequenceCalculate(str, ptr, collection, "");
	sort(collection.begin(), collection.end(),lexcoCompare);
	for(auto str1: collection){
		cout<<str1<<endl;
	}
	cout<<"-------------"<<endl;

	return 0;
}