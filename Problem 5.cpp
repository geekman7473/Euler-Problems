#include<iostream>
#include<cmath>

#define DEBUG
using namespace std;

const int range = 10;

bool isPrime(int num);

int main(){
    int previousVal;
	long product = 1, lastVal;
	for (int i = 2; i < range; i++){
		if (product % i != 0){
        cout << product % i << endl;
			product *= (product % i);
		} 
        if (i > product) {
               product *= i;
               }
	}
	cout << product << " " << 2 % 1;
	system("PAUSE");
}

bool isPrime(int num){
	for (int i = 2; i <= sqrt(num); i++){
		if (num % i == 0){
			return (false);
		}
	}
	return (true);
}
