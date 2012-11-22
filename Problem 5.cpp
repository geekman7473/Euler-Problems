#include<iostream>
#include<cmath>

#define DEBUG
using namespace std;

const int range = 20;

bool isPrime(int num);

int main(){
    int previousVal;
	long product = 1, lastVal;
	for (int i = 2; i < range; i++){
        #ifdef DEBUG
        cout << i << endl;
        #endif
		for (int x = 1; x*i < range; x++){
			if (isPrime(i) && (x+1)*i >= range && x*i != previousVal){
                #ifdef DEBUG
  	            cout << "Product: " << i*x << " I val:" << i << " x val:" << x;
                system("PAUSE");
                #endif
                product *= i * x;
                previousVal = i * x;
			}
		}
		#ifdef DEBUG
		cout << "overall product: " << product << endl;
		#endif
	}
	cout << product;
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
