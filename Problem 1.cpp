#include<iostream>

using namespace std;
int sum = 0;
int main(){
	for (int n = 0; n < 1000; n++){
		if (n % 5 == 0 || n % 3 == 0){
			sum += n;
		}
	}
	cout << sum;
}
