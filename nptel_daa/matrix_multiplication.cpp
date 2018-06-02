#include <bits/stdc++.h>

using namespace std;

void setFileStreams();

// using Euclid approach to find gcd of two numbers

int main() {
	setFileStreams();
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int n = 3;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>b[i][j];
		}
	}
	

	// Algorithm is here
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			c[i][j] = 0;
			for(int k=0; k<n; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

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