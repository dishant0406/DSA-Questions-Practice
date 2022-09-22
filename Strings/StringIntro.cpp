#include <bits/stdc++.h>
using namespace std;

int main(){

	//default way to take input in string
	string a;
	cin>>a; //only one world will be the input
	cout<<a<<endl;

	//using getline function
	string b;
	getline(cin, b); //will take input until a new line is found
	cout<<b<<endl;

	//getling and define the end letter
	string c;
	getline(cin, c, '.'); //will take input until . is found in the sentence
	cout<<c<<endl;

	return 0;
}