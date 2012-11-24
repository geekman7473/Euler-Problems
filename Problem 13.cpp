#include<iostream>
#include<cmath>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main (){
	
	const string grid[100];
	const int range = 100;

	long double sum = 0;
	
	for(int i = 0; i < range; i++){
		string input = grid[i].substr(0,15);
		sum += atoi(input) * pow(10, -5);
	}	
	cout << sum << endl;
	//system("PAUSE");
}
