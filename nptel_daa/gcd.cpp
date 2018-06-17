#include <bits/stdc++.h>

using namespace std;

void setFileStreams();

// using Euclid approach to find gcd of two numbers

int gcd(int m, int n){
	if(n%m == 0){
		return m;
	} else {
		return gcd(n%m, m);	
	}
}
  
int gcdInLoops(int m, int n){
	int r = 0;
	while (n%m == 0){
		r = n%m;
		n = m;
		m = r;
	}
	return m;
} 


int main() {
	setFileStreams();
	int a, b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}

void setFileStreams(){
	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for writing output to output.txt
		freopen("output.txt", "w", stdout);
	#endif
}