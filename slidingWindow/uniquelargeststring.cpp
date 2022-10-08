#include <bits/stdc++.h>
using namespace std;

string largestUniqueString(string str){
	string finalString="";
	int longestStringLength=0;
	string lastString = "";
	unordered_map<char, int> umap;
	bool found = false;

	for(int i=0;i<str.length();i++){
		if(umap.find(str[i])==umap.end()){
			//not found the char
			finalString = finalString+str[i];
			cout<<finalString<<endl;

			longestStringLength=finalString.length();
			umap[str[i]]=i;

		}
		else{
			found = true;
			if(lastString.length()<longestStringLength){
				lastString=finalString;

				finalString="";
				i = umap[str[i]];
				finalString = finalString+str[i];


			}

		}
	}

	// if(lastString.length()<longestStringLength){
	// 	lastString=finalString;
	// }

	if(found==false){
		lastString = finalString;
	}

	return lastString;
}

int main(){
	string name;
	getline(cin,name);
	cout<<largestUniqueString(name)<<endl;

	return 0;
}