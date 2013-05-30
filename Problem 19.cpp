#include <iostream>
#include <ctime>
#include<cstdlib>
#include <fstream>

using namespace std;

#define DAYSLENGTH 36525

int monthLengths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    bool isLeap = false;
    ofstream output ("Problem19.txt");
    int k = 0;
    int year = 1901;
    int firstOfMonthSundays =0;
    for (long i = 0; i <= DAYSLENGTH; i += 0){
        if(k % 12 == 1){
                if(year % 400 == 0){
                    cout << endl << year << " Is a leap year" << endl;
                    output << endl << year << " Is a leap year" << endl;
                    isLeap = true;
                } else if(year % 4 == 0 && !(year % 100 ==0)){
                    cout << endl << year << " Is a leap year" << endl;
                    output << endl << year << " Is a leap year" << endl;
                    isLeap = true;
                }
        }
        if (i % 7 == 5 && i <= DAYSLENGTH){
            cout << k % 12 << " " << i % 7 << " " << i << " " << year <<endl;
            output << k % 12 << " " << i % 7 << " " << i << " " << year <<endl;
            firstOfMonthSundays++;
        }
        //cout << i << endl;
        i += monthLengths[k % 12];
        if(isLeap){
            i++;
            isLeap = false;
        }
        k++;
        if(k % 12== 0){
            year++;
        }
    }
    cout << firstOfMonthSundays;
    output << firstOfMonthSundays;
    system("PAUSE");
}
