#include<iostream.h>
#include<cmath>

const int range = 100;

int main(){
    int sumofSquares = 0, sumSquared = 0, output;
    for (int i = 1; i <= range; i++){
    sumSquared += i;
    sumofSquares += pow(i, 2);
    }
    output = pow(sumSquared, 2) - sumofSquares;
    cout << pow(sumSquared,2) << " " << sumofSquares << " " << output + 1 << endl;
    system("PAUSE");
}
