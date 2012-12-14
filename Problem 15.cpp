#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;
long double fact(long long num);


int main(){
	while (true) {
    long base = 2;
	cout << "Enter a size of grid ";
	cin >> base;
	cout << fact(base*2)/(fact(base) * fact(base));
}
return (0);
}


long double fact(long long num){
	long double product = 1;
	for (long long i = 1; i <= num; i++){
		product *= i;
	}
	return (product);
}
