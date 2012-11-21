#include<iostream>
#include<cmath>
#include<long long.h>

using namespace std;
bool isPrime(long long num);

int main(){
    long long largePrime = 600851475143LL;
    cout << "test1" << endl;
    system("PAUSE");
	bmint lastPrimeFactor = 0;
	    cout << "test2" << endl;
	    system("PAUSE");
	for (long long n = 0; n <= largePrime; n++){
            cout << "test3" << endl;
            system("PAUSE");
		if (largePrime % n == 0 && isPrime(n)){
            cout << "test4" << endl;
            system("PAUSE");
			lastPrimeFactor = n;
		}
		cout << n << endl;
	}
	cout << lastPrimeFactor;
}
bool isPrime(long long num){
	for (long long i = 0; i <= bmfloat::sqrt(num); i++){
            cout << "test5" << endl;
            system("PAUSE");
		if (num % i == 0){
                    cout << "test6" << endl;
                    system("PAUSE");
			return (false);
		}
	}
	return (true);
}
