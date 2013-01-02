#include<iostream>
#include<cmath>
#include <cstdlib>

using namespace std;

long sumDivs (long num);

int main(){
	cout << sumDivs(220);
	system("PAUSE");
}

long sumDivs (long num){
	long sum = 0;
	for (long i = 1; i < num; i++){
		sum += num % i == 0 ? i : 0;
	}
	return (sum);
}
