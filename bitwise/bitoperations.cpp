#include <bits/stdc++.h>
using namespace std;

//right shift the number i times so that we get the ith digit at the first place
//take "&" with 1 to get the digit at the first place
int getIthdigit(int n, int i){
	return (n>>i)&1;
}

//shift 1 to the left i times and take or with the number
//example if we want to set the 2nd digit of 5(101) so we will shift 1 to the left 
//1 time it will become 010 and we take or with 5 that is 101|010 therefore the 
//digit is set
int setithdigit(int n, int i){
	return n|(1<<i);
}

//if we want to clear the 2th bit of 7(111) then we will take & with (101)
//which can we obtained by if we shift 1 to the left 1 time then it becomes 010
//then we take the negation of ~(010)=101
int clearithdigit(int n, int i){
	return n&(~(1<<i));
}

//first we clear the ith digit and make it 0 then we take or with the 
//value shifted i times to the left
int updateithdigit(int n, int i, int v){
	n=clearithdigit(n,i);
	return n|(v<<i);
}

int clearithrange(int n, int i){
	return n&(-1<<(i+1));
}


int main(){
	int n;
	cin>>n;

	int i;
	cin>>i;

	cout<<i<<"'th index of "<<n<<" is "<<clearithrange(n,i)<<endl;

	return 0;
}