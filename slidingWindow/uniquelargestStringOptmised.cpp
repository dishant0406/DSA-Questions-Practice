#include <bits/stdc++.h>
using namespace std;

string largestUniqueString(string str){

	//two pointers to manage start and end of the window
	int i=0;
	int j=0;

	//current window length
	int window_len=0;

	//max window length
	int max_window_length=0;

	//start of the window
	int start_window = -1;

	//ordered map to store the visited nodes
	unordered_map<char, int> m;

	//loop will run we reach the end of the string
	while(j<str.length()){
		char ch = str[j];

		//if the character is available in the map
		//meaning we have that char in the string
		if(m.count(ch) and m[ch]>=i){

			//we set i to the index next to the previous same char
			i=m[ch]+1;

			//decrease the window length
			window_len = j-i;
		}
		
		//we set the node as visited by storing its index 
		//if it is already visited we will update it's index
		m[ch] = j;

		//incease the window length
		window_len++;

		//incease the j pointer to right by 1
		j++;

		//if the current window length is more than the maximum window length
		if(window_len>max_window_length){

			//update the max window length to the current window length
			max_window_length = window_len;

			//set the start window pointer to i
			start_window=i;
		}

		
	}

	//return the substring which will start from the start_winow index
	//and go till start_window+max_window_length
	return str.substr(start_window, max_window_length);

}

int main(){
	string str;
	getline(cin, str);
	cout<<largestUniqueString(str)<<endl;

	return 0;
}