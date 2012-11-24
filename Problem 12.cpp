#include<iostream.h>
#include<cmath>

//#define DEBUG

int numOfFactors(long long num);
int trinum(long long num);

const int range = 500;

int main(){
    #ifdef DEBUG
 cout << numOfFactors(9) << endl;
   cout << trinum(7) << endl;
    #endif
    long long i;
    for(i = 1; numOfFactors(trinum(i)) <= 500; i++){
    #ifdef DEBUG
    cout << i << " " << trinum(i)<< " " << numOfFactors(i) << endl;
    system("PAUSE");
    #endif
    }
    cout << trinum(i) << endl;
    system("PAUSE");
}

int numOfFactors(long long num){
    int facts = 0;
    if(num == 1){

        return (1);

    } else if (num > 1) {

    for(int i = 2; i < sqrt(num); i++){
        if(num % i == 0){
            facts++;
        }
    }
    facts += 1;
    facts = facts * 2;
    if (sqrt(num) == ceil(sqrt(num) - 0.5)){
        facts++;
    }
    return (facts);

    } else if (num < 0){

        return (numOfFactors(abs(num)));

    } else {

        return (0);

    }
}

int trinum(long long num){
long long sum = 0;
for(long long i = 1; i <= num; i++){
    sum += i;
    #ifdef DEBUG
    cout << sum << " " << i << endl;
    #endif
}
return (sum);
}
