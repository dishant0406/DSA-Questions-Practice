#include <bits/stdc++.h>
using namespace std;

int main(){
	//strtok works on char array
	char str[10000];
	cin.getline(str, 1000);

	char *token = strtok(str, " ");
	//stores the state of the 
	//input string in the static variable after the first call so
	//in the next call enter NULL as input

	while(token !=NULL){
		cout<<token<<", ";
		token = strtok(NULL," ");
	}

	return 0;
}