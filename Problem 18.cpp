#include<iostream>
#include<cstdlib>

using namespace std;

short greatestVal(short numA, short numB);

#define ROWS 15

short triGrid[ROWS][ROWS] = {
	//Access is in form of triGrid[vertical][horizontal]
	{75},
	{95, 64},
	{17, 47, 82},
	{18, 35, 87, 10},
	{20, 4, 82, 47, 65},
	{19, 1, 23, 75, 3, 34},
	{88, 2, 77, 73, 7, 63, 67},
	{99, 65, 4, 28, 6, 16, 70, 92},
	{41, 41, 26, 56, 83, 40, 80, 70, 33},
	{41, 48, 72, 33, 47, 32, 37, 16, 94, 29},
	{53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14},
	{70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57},
	{91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48},
	{63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31},
	{04, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}
	};

int main(){
	
	for (short i = ROWS - 2; i > -1; i--){//Goes through rows starting at row one from bottom
		for (short j = 0; j <= i+1; j++){//runs through horizontal members
			triGrid[i][j] += triGrid[i+1][j] > triGrid[i+1][j+1] ? triGrid[i+1][j] : triGrid[i+1][j+1];
		}
	}
	cout << triGrid[0][0] << endl;
	system("PAUSE");
}
