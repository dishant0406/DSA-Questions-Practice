#include <bits/stdc++.h>
using namespace std;

string normalize(const string &sentence) {
    string copy = sentence;
    //Make the changes in copy, and return it
     int j=0;
    while(copy[j]==' '){
    	j++;
    }
    
    if(int(copy[j])>=65 and int(copy[j])<=95){

    }else{
    	copy[j]=toupper(copy[j]);
    }
    for(int i =j+1;i<sentence.length();i++){
    	if(copy[i]==' '){
    		if(copy[i+1]==' '){
    			continue;
    		}
    		if(int(copy[i+1])>=65 and int(copy[i+1])<=95){
    			i++;
    		}else{
    			copy[i+1]=toupper(copy[i+1]);
    			i++;
    		}
    	}else{
    		if(int(copy[i])>=65 and int(copy[i])<=95){
    			copy[i]=tolower(copy[i]);
    		}
    	}
    }
    

    return copy;
}

int main(){
	
	string str;
	getline(cin, str);
	string n = normalize(str);
	cout<<n;

	return 0;
}