#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int num);

const int range = 2000000;

int main(){
long long sum = 0;
for(int i = 2; i <= range; i++){
    if (isPrime(i)){
        sum += i;
    }
}
cout << sum << endl;
system("PAUSE");
}

bool isPrime(int num){
	for (int i = 2; i <= sqrt((float)num); i++){
		if (num % i == 0){
			return (false);
		}
	}
	return (true);
}
