#include<iostream.h>

//#define DEBUG

long long sequence(long long num);

long long currentIterations = 0;
long long maxIterations = 0;
long long largestNum = 0;

const long long range = 1000000;

int main(){
//cout << sequence(1000000) << " " << currentIterations << endl;
//system("PAUSE");

for(long long i = 1; i < range; i++){
    sequence(i);
    #ifdef DEBUG
    cout << currentIterations << "    " << i <<  endl;
    system("PAUSE");
    #endif
    if (currentIterations > maxIterations){
    maxIterations = currentIterations;
    largestNum = i;
    }
    currentIterations = 0;
}
cout << maxIterations << " " << largestNum << endl;
system("PAUSE");
}

long long sequence(long long num){
    #ifdef DEBUG
    cout << num << endl;
    system("PAUSE");
    #endif
    if (num == 1){
        currentIterations++;
        return 1;
    } else if (num % 2 == 0){
        currentIterations++;
        return (sequence(num/2));
    } else {
            currentIterations++;
            return (sequence((3 * num) + 1));
    }
}
