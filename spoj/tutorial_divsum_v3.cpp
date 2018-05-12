#include <iostream>
#include <vector>

using namespace std;

void sieveOfEratos(long N, int s[])
{
    vector <bool> prime(N+1, false);
    for (int i=2; i<=N; i+=2)
        s[i] = 2;

    for (long i=3; i<=N; i+=2)
    {
        if (prime[i] == false)
        {
            s[i] = i;
            for (long j=i; j*i<=N; j+=2)
            {
                if (prime[i*j] == false)
                {
                    prime[i*j] = true;
                    s[i*j] = i;
                }
            }
        }
    }
}


int divSum(int n, int s[]){
	int result = 1;
	int N = n;
	if(n == 1)
		return 0;
	int currPrime = s[n];
	int currProd = s[n];

	int currSum = 1 + currProd;
	
	while(n > 1) {
		n /= s[n];

		if (currPrime == s[n]){
			currProd *= currPrime;
			currSum += currProd;
			continue;
		}

		result *= currSum;

		currPrime = s[n];
		currProd = s[n];
		currSum = 1 + currProd;
	}

	return result-N;
}


int main(){
	int lines;

	long n;
	int s[500001];

	sieveOfEratos(500000, s);

	cin >> lines;

	for(int i=0; i<lines; i++){
			cin >> n;
			cout << divSum(n, s) << endl;
	}

	return 0;
}
