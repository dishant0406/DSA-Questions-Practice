#include <bits/stdc++.h>
using namespace std;

/*
Sample Input
------------
3
92 022
82 12
77 13
2 false numeric
Sample Output
-------------
82 12
77 13
92 022
*/

//function to extact the key from the string
string extractKeyFromString(string fullString, int key){

	//converting the string to charater array so that we can use strtok
	char *s = strtok((char *)fullString.c_str(), " ");
	//(char *)fullString.c_str() gets the character array from an string

	//while look to get the exact key
	while(key>1){
		s=strtok(NULL, " ");
		key--;
	}

	//converting the char array to string and returning it
	return (string)s;

}

//function to convert string into number if it contains number value
int convertToINT(string key){
	int ans = 0;
	int p = 1;

	for(int i = key.length()-1;i>=0;i--){
		ans = ans + ((key[i]+'0')*p);
		p=p*10;
	}

	return ans;
}

//function to compare the strings according to their numeric values
bool numericCompare(pair<string, string> s1, pair<string, string> s2){
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;

	return convertToINT(key1) < convertToINT(key2);
}

//function to compare the strings according to the lexographic values
bool lexcoCompare(pair<string, string> s1, pair<string, string> s2){
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;

	return key1 < key2;
}

int main(){

	int n;
	cin>>n;

	cin.get(); //consume the enter after the first 3

	string temp; //temperory string to store the getline
	vector<string> v; //vector to store all the strings

	for(int i=0;i<n;i++){
		getline(cin, temp); //take the input of temp
		v.push_back(temp); //push it in the vector
	}

	int key; //key on which the array is to be sorted

	string ordering, reversal; //order if it is numeric sorting or lexographic
	
	cin>>key>>reversal>>ordering; //taking the input

	//1...
	//extract the key from the string
	//and store them into a array 
	//(storing the complete string and key as a pair string string)

	vector<pair<string, string>> vp; //pair vector to store the string and keys

	for(int i=0;i<n;i++){
		vp.push_back({v[i], extractKeyFromString(v[i], key)});
		//pushing the key and extracted key obtained from the function into the vector
	}


	//2...
	// sorting according to the ordering paramer
	if(ordering=="numeric"){
		sort(vp.begin(), vp.end(), numericCompare);
	}
	else{
		sort(vp.begin(),vp.end(), lexcoCompare);
	}

	//3...
	//reverse if reversal is true
	if(reversal=="true"){
		reverse(vp.begin(), vp.end());
	}

	//4...
	//showing the output of the array
	for(int i=0;i<n;i++){
		cout<<vp[i].first<<endl;
	}


	

	return 0;
}