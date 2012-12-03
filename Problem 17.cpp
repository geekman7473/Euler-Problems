#include<iostream>
#include<cmath>
#include <cstdlib>

#define DEBUG

using namespace std;

int digitConversion(int shortNum, int digitsPlace);
long numOfLetters(int num);

long long int sum = 0;

int main(){
#ifdef DEBUG
int input = -1;
while(input != 0){
            cin >> input;
            cout << numOfLetters(input);
}
#endif
    const int range =  1000;

    for(int i = 1; i <= range; i++){
        sum += numOfLetters(i);
    }
// TODO (Justin Becker#1#): Add full support for # > 999
    cout << sum + 11 << endl;
    system("PAUSE");
}

long numOfLetters(int num){
    int charsInDigits[11] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3};
    int charsInTens[11] = {0, 3, 6, 6, 5, 5, 5, 7, 6, 6};
    int charsInTeens [11] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
    int tempNum = num;
    int tempArray[4];
    long sum = 0;
    for (int a = 0; a < 4; a++){
        tempArray[a] = 0;
    }
    for (int x = 1; tempNum != 0; x++){ //converts numbers to digits in Temp Array
        tempArray[x - 1] = tempNum % 10;
        #ifdef DEBUG
        cout << tempNum % 10 << " " << tempNum << endl;
        #endif
        tempNum -= tempNum % 10;
        tempNum /= 10;
    }
    #ifdef DEBUG
    for (int z = 3; z >= 0; z--){
        cout << "array" << z <<": " << tempArray[z] << " ";
    }
    system("PAUSE");
    #endif
    //cout << endl << "temp2: " << tempArray[2] << endl;
    if (tempArray[2] > 0){
        sum += charsInDigits[tempArray[2]] + 7;
        if ((tempArray[1] > 0 || tempArray[0] > 0) && tempArray[2] > 0){
			cout << "wut";
            sum += 3;
        }
    }
    if (tempArray[1] > 1){
        sum += charsInTens[tempArray[1]];
	}
	if (tempArray[0] > 0 && !(num >= 10 && num <= 20)){
            sum += charsInDigits[tempArray[0]];
    }
    //todo: rewrite handleing of teens
    if (num%100 >= 10 && num%100 <= 20){
        sum += charsInTeens[tempArray[0]];
    }
    /*cout<<"here it goes  ";
    cout<<tempArray[2]<<"  " <<tempArray[1]<<"   " <<tempArray[0];
    cout<<num;
    cout<<"  This is over "; */
    /*if (num < 10 || (tempArray[2] > 0 && tempArray[0] > 0 && tempArray[1] == 0)){
			cout << "lol";
            sum -= 3;
            }*/
    return(sum);
}
