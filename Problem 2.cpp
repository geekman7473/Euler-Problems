#include<iostream>
int fibon(int num);

using namespace std;

int main(){
	int sum = 0;
	for (int n = 0; fibon(n) < 4000000; n++){
		if (fibon(n) % 2 == 0){
			sum += fibon(n);
		}
	}
	cout << sum;
}

int fibon(int num){
	if (num == 1 || num == 2){
		return(1);
	} else if (num == 0){
		return(0);
	} else if (num > 0) {
		return(fibon(num -1) + fibon(num - 2));
	}
}
