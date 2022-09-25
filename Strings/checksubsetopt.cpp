#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cout<<"Enter String"<<endl;
	getline(cin, str);

	string substr;
	cout<<"Enter Sub-String"<<endl;
	getline(cin, substr);

	int i = str.length()-1;
	int j = substr.length()-1;

	while(i>=0 and j>=0){
		if(substr[j]==str[i]){
			i--;
			j--;
		}
		else{
			i--;
		}
	}

	if(j==-1){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	cout<<endl;

	return 0;
}