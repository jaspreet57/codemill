#include<iostream>
#include<math.h>

using namespace std;

int divSum(int num) {
	int sum = 1;
	int n = num;
	if(n > 1) {
		for(int i=2; i <= sqrt(n); i++) {
			int curr_sum = 1;
			int curr_term = 1;
			while(n % i == 0){
				n = n/i;
				curr_term *= i;
				curr_sum += curr_term;
			}

			sum *= curr_sum;
		}

		if(n >= 2)
			sum *= (1+n);
	}

	return sum - num;

}
int main(){
	int lines, num;
	cin >> lines;
	for(int i=0; i<lines; i++){
		cin >> num;
		cout << divSum(num) << endl;
	}
	return 0;
}
