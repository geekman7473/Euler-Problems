#include<iostream>
#include<cmath>

//#define DEBUG
using namespace std;

const int range = 20;

bool isPrime(int num);
long lcm(int num1, int num2);
int gcf(int num1, int num2);

int main(){
    #ifdef DEBUG
    cout << gcf(4,8) << endl;
    system("PAUSE");
    cout << gcf(8,4) << endl;
    system("PAUSE");
    #endif
    int overall;
    #ifdef DEBUG
    cout << "1 and 2" << endl;
    #endif
    overall = lcm(1,2);
	for(int i = 3; i < range; i++){
	    #ifdef DEBUG
	    cout << i << endl;
	    #endif
	    overall = lcm(overall, i);
        #ifdef DEBUG
        cout << "Overall LCM: " << overall << endl;
        #endif
	}
	cout << overall;
	system("PAUSE");
}

long lcm(int num1, int num2){
    if (num1 == 0 || num2 == 0){
    return (0);
    } else {
        #ifdef DEBUG
        cout << "num1: " << num1 << " num2:" << num2 << " GCF: "<< gcf(num1, num2) << " OVERALL Output: " << abs(num1 * num2)/gcf(num1, num2) << endl;
        system("PAUSE");
        #endif
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
    #ifdef DEBUG
    cout << "larger: " << num1 << " smaller: " << num2;
    #endif
    do{
         remain = num1 % num2;
         num1 = num2;
         if (remain != 0){
         num2 = remain;
         }
    }while (remain != 0);
    return (num2);
}
