#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[10000];
	cin.getline(a, 10000);

	//using additional string
		// string b ="";

		// for(char ch:a){
		// 	if(ch==' '){
		// 		b=b+"%20";
		// 	}else{
		// 		b=b+ch;
		// 	}
		// }


	int spacecount=0;
	int sizeofarray;
	for(int i=0;i<10000;i++){
		if(a[i]==' '){
			spacecount++;
		}
		if(a[i]=='\0'){
			cout<<"ending"<<endl;
			sizeofarray=i;
			break;
		}
	}

	int sizeofarrayafterspace = sizeofarray+(spacecount*2);

	for(int i=sizeofarray;i>=0;i--){
		if(a[i]==' '){
			a[sizeofarrayafterspace]='0';
			a[sizeofarrayafterspace-1]='2';
			a[sizeofarrayafterspace-2]='%';
			sizeofarrayafterspace=sizeofarrayafterspace-3;
		}
		else{
			a[sizeofarrayafterspace]=a[i];
			sizeofarrayafterspace=sizeofarrayafterspace-1;
		}
	}

	cout<<a;

	return 0;
}