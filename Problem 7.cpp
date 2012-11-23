#include <iostream>
#include <cmath>
//#define DEBUG

using namespace std;

bool isPrime(long long num);

const int target = 10001;

int main(){
    int count = 0;
    long long lastPrime = -1;
    for (long long i = 2; count < target; i++){
        if(isPrime(i)){
            count++;
            lastPrime = i;
        }
    }
    cout << lastPrime << endl;
    system("PAUSE");
}

bool isPrime(long long num){
     #ifdef DEBUG
     cout << "test1";
	system("PAUSE");
	#endif
	long double numFloat = num;
	for (long long i = 2; i <= sqrt(numFloat); i++){
        #ifdef DEBUG
	    cout << i << " " << sqrt(numFloat) << endl;
		system("PAUSE");
		#endif
		if (num % i == 0){
			return (false);
		}
	}
	return (true);
}
