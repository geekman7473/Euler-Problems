#include<iostream>
#include<cstdlib>
#include<cmath>

//#define DEBUG

using namespace std;

/* TODO (geekman7473#1#): Rewrite for use with arbitrary length integers */

int main(){
	while (true) {
	unsigned long long product = 1;
    double base = 2;
	cout << "Enter a size of grid ";
	cin >> base;
	for (double i = 1; i <= base; i++){
		#ifdef DEBUG
		cout << endl << base <<" " << i << " " << base + i << " " << (base + i) / i;
		cout << " " << product;
		#endif
		product *= (base + i) / i;
		#ifdef DEBUG
		cout << " " << product;
		#endif
	}
	cout << endl << product << endl;
	system("PAUSE");
}
return (0);
}
