#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

#include<iostream>
#include<cmath>

using namespace std;

void divide(int base);
void multiply(int base);
long double fact(int num);

#define ARRAYSIZE 400

double product [ARRAYSIZE];
const int productLength = ARRAYSIZE;

/*
	Name: 
	Copyright: 
	Author: 
	Date: 06/12/12 08:55
	Description: 
*/
int main(){
	long exponet = 1000;
    long base = 2;
	cout << "Enter a size of grid ";
	cin >> base;
	product[0] = 1;
	for(int i = 1; i <= base*2; i++){
		multiply(i);
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
	for(int i = 1; i <= base; i++){
		cout << " divide " << i << " ";
		system("PAUSE");
		divide(i);
		cout << " end divide ";
		system("PAUSE");
		for (int pos = productLength - 1; pos >= 0; pos--){//goes through digits
		cout << " pos " << pos;
				for (int y = -1; product[pos] == floor(product[pos]); y--){
					if(pos - y >= 0){
						product[pos - y] += product [pos]/pow(10, (double)y);
						product[pos] -= product [pos]/pow(10, (double)y);
					}
			}
		}
	}
	for (int x = productLength - 1; x >= 0 ; x--){
		cout << product[x] << " ";
	}
	cout << endl << endl;
	long long tempSum = 0;
	for (int x = 0; x < ARRAYSIZE; x++){
        tempSum += product[x];
	}
	cout << tempSum << endl;
	//system("PAUSE");
}

void multiply(int base){
	for (int x = productLength - 1; x >= 0 ; x--){
		product[x] *= base;
	}
}
void divide(int base){
	for (int x = productLength - 1; x >= 0 ; x--){
		product[x] /= base;
	}
}
