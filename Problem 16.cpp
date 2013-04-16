#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void multiply(int base);
void add(unsigned long long n);

#define ARRAYSIZE 8000

vector<int> product(1);
//const int productLength = ARRAYSIZE;

int main(){
	long exponet = 1000;
    long base = 2;
while (true){
    product.clear();
    product.resize(2);
    //cout << product.size() << endl;
	cout << "Enter a positive Base as an integer: ";
	cin >> base;
	cout << "Enter a Positive Exponent an integer: ";
	cin >> exponet;
	product[0] = 1;
	for(int i = 1; i <= exponet; i++){
		multiply(base);
		for (int pos = 0; pos < product.size(); ++pos){//goes through digits
			for (double y = 1; product[pos] >= 10; ++y){//Carrys digits accordingly
		    	if (y != 0){
                        //cout << pos << " "<< pos + y << " " << product.size() << endl;
                        //system("PAUSE");
              		if(pos + (int)y > product.size()-1){
              		    //cout << "test";
						product.push_back (floor(product [pos] / pow(10, y)));
						product[pos] -= floor(product [pos] / pow(10, y)) * 10;
              		} else {
		       			product[pos + (int)y] += floor(product [pos] / pow(10, y));
		       			product[pos] -= floor(product [pos] / pow(10, y)) * 10;
					}
           		}
			}
		}
	}
	for (int x = product.size() - 1; x >= 0 ; x--){
		cout << product[x] << "";
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

void add(unsigned long long n){
    long long pos = 0;
    if(n > 0){
        for (double y = 1; product[pos] >= 10; ++y){//Carrys digits accordingly
                if(pos + (int)y > product.size()-1){
                    product.push_back (floor(n / pow(10, y)));
                    n -= floor(n / pow(10, y)) * 10;
                } else {
                    product[pos + (int)y] += floor(n / pow(10, y));
                    n -= floor(n / pow(10, y)) * 10;
                }
        }
    } else if(n < 0){
    }
    	for (int x = product.size() - 1; x >= 0 ; x--){
		cout << product[x] << " ";
	}
	system("PAUSE");
}
