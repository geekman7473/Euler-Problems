#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void multiply(int base);

#define ARRAYSIZE 8000

vector<int> product;
//const int productLength = ARRAYSIZE;

int main(){
	long exponet = 1000;
    long base = 2;
while (true){
	cout << "Enter a positive Base as an integer: ";
	cin >> base;
	cout << "Enter a Positive Exponent an integer: ";
	cin >> exponet;
	product[0] = 1;
	for(int i = 1; i <= exponet; i++){
		multiply(base);
		for (int pos = 0; pos < product.size() -1; pos++){//goes through digits
			for (double y = 0; product[pos] >= pow(10, y); y++){//Carrys digits accordingly
		    	if (y != 0){
              		int YInt = y;
              		if(pos + YInt > product.size()-1){
						product.push_back (floor(product [pos] / pow(10, y)));
						product[pos] -= floor(product [pos] / pow(10, y)) * 10;
              		} else {
		       			product[pos + YInt] += floor(product [pos] / pow(10, y));
		       			product[pos] -= floor(product [pos] / pow(10, y)) * 10;
					}
           		}
			}
		}
	}
	for (int x = product.size() - 1; x >= 0 ; x--){
		cout << product[x] << " ";
	}
	cout << endl << endl;
	long long tempSum = 0;
	for (int x = 0; x < product.size(); x++){
        tempSum += product[x];
	}
	cout << tempSum << endl;
	system("PAUSE");
}
}

void multiply(int base){
	for (int x = product.size() - 1; x >= 0 ; x--){
		product[x] *= base;
	}
}
