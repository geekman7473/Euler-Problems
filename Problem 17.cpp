#include<iostream>
#include<cmath>

using namespace std;

long numOfLetters(int num);
int digitConversion(int shortNum, int digitsPlace);
int teenConvert (int num);

long long int sum = 0;

int main(){

cout << digitConversion(1, 3) << endl;
system("PAUSE");

    const int range =  1000;

    for(int i = 1; i <= range; i++){
        sum += numOfLetters(i);
    }
// TODO (Justin Becker#1#): Add full support for # > 999
    cout << sum + 11 << endl;
    system("PAUSE");
}

long numOfLetters(int num){

    int tempNum = num;
    int tempArray[4];
    long sum;
    for (int x = 1; tempNum != 0; x++){ //converts numbers to digits in Temp Array
        for (int a = 0; a < 4; a++){
            tempArray[a] = 0;
        }
        tempArray[x - 1] = tempNum % 10;
        cout << tempNum % 10 << " " << tempNum << endl;
        tempNum -= tempNum % 10;
        tempNum /= 10;
    for (int z = 3; z >= 0; z--){
        cout << "array" << z <<": " << tempArray[z] << " ";
    }
    system("PAUSE");
    for (int y = 0; y < 4; y++){
            if (tempArray[1] == 1 && tempArray [0] > 0){
                return teenConvert(tempArray[0]);
            } else {
                return digitConversion(tempArray[y], y + 1);
            }
        }
    }
}

int digitConversion(int shortNum, int digitsPlace){
        switch (digitsPlace){
        case 1:
            switch (shortNum){
                case 1:
                case 2:
                case 6:
                    return (3);
                    break;
                case 4:
                case 5:
                case 9:
                    return (4);
                    break;
                default:
                    return (5);
                    break;
        }
        case 2:
            switch (shortNum){
                case 1:
                    return (3);
                    break;
                case 2:
                case 3:
                case 8:
                case 9:
                    return (6);
                    break;
                case 4:
                case 5:
                case 6:
                    return (5);
                    break;
                default:
                    return(7);
                    break;
            }
        case 3:
            switch (shortNum){
                case 1:
                case 2:
                case 6:
                    return (13);
                    break;
                case 4:
                case 5:
                case 9:
                    return (14);
                    break;
                default:
                    return (15);
                    break;
                    }
        }
}

int teenConvert (int num){

    switch (num){
        case 1:
        case 2:
            return (6);
            break;
        case 5:
        case 6:
            return (7);
            break;
        case 3:
        case 4:
        case 8:
        case 9:
            return (8);
            break;
        default:
            return (9);
            break;
    }

}
