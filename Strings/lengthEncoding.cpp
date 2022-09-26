#include <bits/stdc++.h>
using namespace std;

string compressString(const string &str){   
    //complete the function to return output string
  
    string cstr = "";
    int count = 1;
    for(int i=0;i<str.length();i++){
    	
    	if(str[i]==str[i+1]){
    		count++;
    	}
    	else{
    		
    		cstr = cstr + str[i];
    		cstr = cstr + to_string(count);
    		count = 1;
    	}
    }

    if(cstr.length()>str.length()){
    	return str;
    }

    return cstr;
   
}

int main(){
	string str;
	getline(cin, str);

	string cstr = compressString(str);
	cout<<cstr<<endl;

	return 0;
}