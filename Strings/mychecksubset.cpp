#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cout<<"Enter String"<<endl;
	getline(cin, str);

	string substr;
	cout<<"Enter Sub-String"<<endl;
	getline(cin, substr);


	int substrptr=0;

	string checkstr="";

	for(int i=0;i<str.length();i++){
		if(substrptr>substr.length()){
			break;
		}

		if(substr[substrptr]==str[i]){
			checkstr=checkstr+substr[substrptr];
			substrptr++;
		}
	}

	if(checkstr==substr){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}

	return 0;
}