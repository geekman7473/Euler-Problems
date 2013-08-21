#include<iostream>
#include<cmath>

using namespace std;
bool isPrime(long long num);

//#define DEBUG

int main(){
    long long largePrime = 600851475143LL;
	long long lastPrimeFactor = 0;
	for (long long n = 2; n <= largePrime - 1; n++){
		if (largePrime % n == 0 && isPrime(largePrime / n)){
			lastPrimeFactor = largePrime / n;
			break;
		}
	}
	cout << lastPrimeFactor;
	cin.get();
}

bool isPrime(long long num){
	long double numFloat = num;
	for (long long i = 2; i <= sqrt(numFloat); i++){
		if (num % i == 0){
			return (false);
		}
	}
	return (true);
}
