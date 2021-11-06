#include <iostream>
using namespace std;


int main(int argc, char** argv){
	
	int n=0;
	int h;
	int l;
	const char s[] = " ";
	const char s2[] = "|";
	const char s3[] = "_";

	if(argc >1){
		n= atoi(argv[1]);
	}

	h=n/4+1;
	l=n/5;	
	if(n==4){
		h--;
	}
	for(int k=0;k<n-h;k++){
		//alignment left
		for(int j=0;j<n-k;j++){
			cout << s;
		}
		//print left
		cout << "/";
		//alignment right
		for(int i=0;i<2*k;i++){
			cout << s;
		}
		//print right
		cout << "\\" << endl;
	}
	//print top of door
	//alignment left
	if(h>1){
		for(int j=0;j<h;j++){
			cout << s;
		}
	}else if(n>0) {
		cout << s;
	}

	//print left
	if(n > 0){cout << "/";}
	
	if (l > 0){	
		//alignment top door left
		for(int i=0;i<n-h+1-l/2;i++){
			cout << s;
		}
		//print door top
		for(int i=n-h-l/2;i<n-h+l/2;i++){
			cout << s3;
		}
		//alignment top door right
		for(int i=n-h+l/2;i<2*(n-h)-1;i++){
			cout << s;
		}
	}
	else{
		for(int i=0;i<2*(n-h);i++){
			cout << s;
		}
	}

	//print right
	if(n>0){cout << "\\" << endl;}
	
	//print door
	for(int k=n-h+1;k<n;k++){
		
		//alignment left
		for(int j=0;j<n-k;j++){
			cout << s;
		}
		//print left
		cout << "/";
		//alignment right
		for(int i=0;i<2*k-2;i++){
			cout << s;
			if((i==k-1-l/2) || (i==k-1+l/2)){
				cout << s2;
			}
		}
		if(l==1){
			cout << s;
		}
		//print right
		cout << "\\" << endl;
				
	}

	return 0;
}
