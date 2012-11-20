#include<iostream>
#include<cmath>
using namespace std;
long long int largePrime = 600851475143;
bool isPrime(int num);

int main(){
	int lastPrimeFactor = 0;
	for (int n = 0; n <= sqrt(largePrime); n++){
		if (largePrime % n == 0 && isPrime(n)){
			lastPrimeFactor = n;
		}
	}
	cout << lastPrimeFactor;
}

bool isPrime(int num){
	for (int i = 0; i <= sqrt(num); i++){
		if (num % i == 0){
			return (false);
		}
	}
	return (true);
}
