#include<iostream>
#include<cmath>
//#define DEBUG

using namespace std;

int main(){
    long double a = 1, b = 2, c = 3;
    for (b = 2; b < 1000; b++){
        for (a = 1; a < b && a < 1000; a++){
            c = 1000 - a - b;
            if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
                break;
            }
        }
        if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
        break;
        }
    }
    cout << a*b*c << " " << a << " " << b << " " << c << endl;
    system("PAUSE");
}
