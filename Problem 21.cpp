#include<iostream>
#include<cmath>
#include <cstdlib>

using namespace std;

long sumDivs (long num);

int main(){
	//cout << sumDivs(220);
	//cout << sumDivs(220) << " " << sumDivs(sumDivs(sumDivs(220))) << " ";
	long long sum = 0;
	for (long i = 1; i < 10000; i++){
		if (i == sumDivs(sumDivs(i)) && i != sumDivs(i)){
			cout << i << " " << sumDivs(i) << " " << sumDivs(sumDivs(i)) << endl;
			//system("PAUSE");
			sum += i;
		}
	}
	cout << sum;
	system("PAUSE");
}

long sumDivs (long num){
	long sum = 0;
	for (long i = 1; i < num; i++){
		sum += num % i == 0 ? i : 0;
	}
	return (sum);
}
