#include<iostream>
#include<cmath>

using namespace std;
bool isPrime(long long num);

int main(){
    long long largePrime = 600851475143LL;
	long long lastPrimeFactor = 0;
	for (long long n = 2; n <= largePrime - 1; n++){
		if (largePrime % n == 0 && isPrime(n)){
			lastPrimeFactor = n;
		}
		if (n % 600000000 == 0){
			cout << n/600000000 << "/1001" << endl;
		}
	}
	cout << lastPrimeFactor;
	system("PAUSE");
}
bool isPrime(long long num){
	long double numFloat = num;
	for (long long i = 2; i <= numFloat; i++){
		if (num % i == 0){
			return (false);
		}
	}
	return (true);
}
