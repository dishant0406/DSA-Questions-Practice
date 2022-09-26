#include <bits/stdc++.h>
using namespace std;

string convert_to_digital_time(int minutes){
    //complete this function
    int hour = minutes/60;
    int minutesremain = minutes%60;

    string str;
    string minutesstr = to_string(minutesremain);
    if(minutesstr.length()<2){
    	str = to_string(hour)+':'+'0'+to_string(minutesremain);
    }
    else{
    	str = to_string(hour)+':'+to_string(minutesremain);
    }

    return str;
    
}

int main(){
	int n;
	cin>>n;
	string str = convert_to_digital_time(n);
	cout<<str<<endl;

	return 0;
}