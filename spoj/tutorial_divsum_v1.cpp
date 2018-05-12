#include<iostream>
#include<math.h>

using namespace std;

int divSum(int num){
        int sum = 1;
        int x = 0;
        if(num > 1){
                int sqrtOfNum = sqrt(num);
                for(int i=2; i<=sqrtOfNum; i++){
                        if(num%i == 0){
                                sum += i;
                                x = num/i;
                                if(x!=i){
                                	sum += x;
                                }
                        }
                }
                return sum;
        }else{
                return 0;
        }
}

int main(){
        int lines = 0;
        int line = 0;
        cin >> lines;
        for(int i=0; i<lines; i++){
                cin >> line;
                cout << divSum(line) << endl;
        }
}


