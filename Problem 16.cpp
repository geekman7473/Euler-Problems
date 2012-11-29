#include<iostream>
#include<cmath>

using namespace std;

void multiply(int base);

#define ARRAYSIZE 1024

long product [ARRAYSIZE];
const int productLength = ARRAYSIZE;
const int exponet = 1000;
const int base = 2;

int main(){
	product[0] = 1;
	for(int i = 1; i <= exponet; i++){
		multiply(base);
		for (int pos = 0; pos < productLength; pos++){//goes through digits
			for (double y = 0; product[pos] >= pow(10, y); y++){//Carrys digits accordingly
		    	if (y != 0){
              		int YInt = y;
		       		product[pos + YInt] += floor(product [pos] / pow(10, y));
		       		product[pos] -= floor(product [pos] / pow(10, y)) * 10;
           }
		}
	}
}
	for (int x = productLength - 1; x >= 0 ; x--){
		cout << product[x] << " ";
	}
	cout << endl << endl;
	long long tempSum;
	for (int x = 0; x < ARRAYSIZE; x++){
        tempSum += product[x];
	}
	cout << tempSum << endl;
	system("PAUSE");
}

void multiply(int base){
	for (int x = productLength - 1; x >= 0 ; x--){
		product[x] *= base;
	}
}
