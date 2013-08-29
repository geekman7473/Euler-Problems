#include<iostream>
#include<cmath>

//#define DEBUG
using namespace std;

const int range = 20;

bool isPrime(int num);
long lcm(int num1, int num2);
int gcf(int num1, int num2);

int main(){
    int overall;
    overall = lcm(1,2);
	for(int i = 3; i < range; i++){
	    overall = lcm(overall, i);
	}
	cout << overall;
	system("PAUSE");
}

long lcm(int num1, int num2){
    if (num1 == 0 || num2 == 0){
    return (0);
    } else {
    return (abs(num1 * num2)/gcf(num1, num2));
    }
}

int gcf(int num1, int num2){
    int remain, switch_int;
    if(num1 < num2){
        switch_int = num1;
        num1 = num2;
        num2 = switch_int;
    }
    do{
         remain = num1 % num2;
         num1 = num2;
         if (remain != 0){
         num2 = remain;
         }
    }while (remain != 0);
    return (num2);
}
