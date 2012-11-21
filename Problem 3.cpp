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
		//cout <<"LastPrimeFActor: " << lastPrimeFactor << "N:" << n << " remainder" <<largePrime % n << " isPrime" << isPrime(n) << " Int main" << endl;
		//system("PAUSE");
	}
	cout << lastPrimeFactor;
	system("PAUSE");
}
bool isPrime(long long num){
	long double numFloat = num;
	for (long long i = 2; i <= sqrt(numFloat); i++){
	    //cout << i << " " << sqrt(numFloat) << " isPrime" << endl;
		//system("PAUSE");
		if (num % i == 0){
			return (false);
		}
	}
	return (true);
}
