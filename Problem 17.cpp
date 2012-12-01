#include<iostream>
#include<cmath>

#define DEBUG

using namespace std;

short hundredsConvert(short num);
long numOfLetters(int num);
int digitConversion(int shortNum, int digitsPlace);
int teenConvert (int num);

long long int sum = 0;

int main(){
#ifdef DEBUG
cout << numOfLetters(314) << " 314 as characters" << endl;
system("PAUSE");
cout << numOfLetters(350) << " 350 as characters" << endl;
system("PAUSE");
cout << numOfLetters(999) << " 999 as characters" << endl;
system("PAUSE");
cout << numOfLetters(125) << " 125 as characters" << endl;
system("PAUSE");
cout << numOfLetters(90) << " 90 as characters" << endl;
system("PAUSE");
cout << numOfLetters(8) << " 8 as characters" << endl;
system("PAUSE");
cout << numOfLetters(11) << " 11 as characters" << endl;
system("PAUSE");
cout << numOfLetters(12) << " 12 as characters" << endl;
system("PAUSE");
cout << numOfLetters(13) << " 13 as characters" << endl;
system("PAUSE");
cout << numOfLetters(14) << " 14 as characters" << endl;
system("PAUSE");
cout << numOfLetters(15) << " 15 as characters" << endl;
system("PAUSE");
cout << numOfLetters(16) << " 16 as characters" << endl;
system("PAUSE");
cout << numOfLetters(17) << " 17 as characters" << endl;
system("PAUSE");
cout << numOfLetters(18) << " 18 as characters" << endl;
system("PAUSE");
cout << numOfLetters(19) << " 19 as characters" << endl;
system("PAUSE");
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
    int tempNum = num;
    int tempArray[4];
    long sum = 0;
    for (int a = 0; a < 4; a++){
        tempArray[a] = 0;
    }
    for (int x = 1; tempNum != 0; x++){ //converts numbers to digits in Temp Array
        tempArray[x - 1] = tempNum % 10;
        cout << tempNum % 10 << " " << tempNum << endl;
        tempNum -= tempNum % 10;
        tempNum /= 10;
    }
    #ifdef DEBUG
    for (int z = 3; z >= 0; z--){
        cout << "array" << z <<": " << tempArray[z] << " ";
    }
    system("PAUSE");
    #endif
    for (int y = 0; y < 3; y++){
            if (tempArray[1] == 1 && tempArray [0] > 0){
                sum += teenConvert(tempArray[0]);
            }else if(tempArray[2] > 0 && tempArray[1] == 0 && tempArray[0] == 0){
                sum += hundredsConvert(tempArray[2]);
            } else {
                sum += digitConversion(tempArray[y], y + 1);
            }
        }
    return(sum);
}

int digitConversion(int shortNum, int digitsPlace){
        switch (digitsPlace){
        case 1:
            switch (shortNum){
                case 0:
                    return (0);
                    break;
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
                case 0:
                    return (0);
                    break;
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
                case 0:
                    return (0);
                    break;
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
        case 0:
            return (0);
            break;
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

short hundredsConvert(short num){
            switch (num){
                case 0:
                    return (0);
                    break;
                case 1:
                case 2:
                case 6:
                    return (10);
                    break;
                case 4:
                case 5:
                case 9:
                    return (11);
                    break;
                default:
                    return (12);
                    break;
                    }
}
