#include<bits/stdc++.h>

int sum(int x, int y){
	return x + y;	
}

int subtract(int x, int y){
	int res = 0;
	res = x - y;
	return res;
}

// Fuctions Added in Testing Branch
int mul(int x, int y){
	return x*y;
}

// Fuctions Added in Testing BugFix Branch
int div(int x, int y){
	return (y > 0 ? x/y : -1);
}

int main(){
	
	int t;
	cin>> t;

	cout<<"Number is "<<t<<endl;
	return 0
}
