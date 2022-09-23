#include <bits/stdc++.h>
using namespace std;

int main(){

	string str;
	getline(cin, str);

	//using stringstream object
	stringstream strstream(str);

	//string to store the word through the stringstream
	string token;

	//vector to push the obtained word
	vector<string> tokenstring;

	//strstream as input, token to store the word, ' ' to set the end word
	while(getline(strstream,token,' ')){
		tokenstring.push_back(token);
	}

	for(auto s:tokenstring){
		cout<<s<<", ";
	}
	cout<<endl;


	return 0;
}