#include <bits/stdc++.h>

using namespace std;

void setFileStreams();

int main() {
	setFileStreams();
	int a,b;
	cin>>a>>b;
	cout<<(a*b);
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