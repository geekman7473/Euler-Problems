#include<iostream>
#include<cmath>
#include<vector>
#include<cstdlib>
#include<fstream>

using namespace std;

vector<long> abundants;

bool sumOfabund(long n);
unsigned long long sumDivisors(long n);

int main(){
	ofstream output ("Problem23Debug.txt");
	for(long i = 2; i <= 28123; i++){
		if(sumDivisors(i) > i){
			abundants.push_back(i);
			//output << endl << i << " " << sumDivisors(i);
		}
	}

	unsigned long long sumOfNonAbundants = 0;

	for(long j = 1; j< 29000; j++){
        if(!sumOfabund(j)){
                sumOfNonAbundants += j;
        }
        if(j % 1000 == 0){
            cout <<endl << j;
        }
	}
	cout << endl << sumOfNonAbundants;
	return 0;
}

unsigned long long sumDivisors(long n){
	unsigned long long returnVal = 1;
	for (long i = 2; i < sqrt(n); i++){
		if (n % i == 0){
			returnVal += i;
			returnVal += (n / i);
		}
	}
	if(sqrt(n) == ceil(sqrt(n))){
		returnVal += sqrt(n);
	}
	return returnVal;
}

bool sumOfabund(long n){
	for(long i =0; i< abundants.size() && abundants[i] < n; i++){
       	for(long j =0; j< abundants.size() && abundants[j] < n; j++){
            if (abundants[i] + abundants[j] == n){
                return true;
            }
        }
	}
	return false;
}


