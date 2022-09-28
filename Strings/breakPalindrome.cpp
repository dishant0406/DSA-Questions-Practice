#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
	bool isPalindrome = true;
	int j= str.length()-1;
	for(int i=0;i<str.length()/2;i++){
		if(str[i]==str[j]){
			j--;
			continue;
		}
		else{
			isPalindrome = false;
		}
	}

	return isPalindrome;
}


string breakPalindrome(string palindrome) {
        
        	for(int i=0;i<palindrome.length()-1;i++){
        		string str = palindrome;
        		if(checkPalindrome(str)){
        			
        		}
        	}
        
}

int main(){
	string str;
	getline(cin, str);

	cout<< checkPalindrome(str);

	return 0;
}