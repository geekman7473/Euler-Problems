#include<iostream>
#include<cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <locale>
#include <sstream>

using namespace std;
bool isPalin(string input);
string conString (double input);

int main(){
    int greatVal = 0;
    for (int x = 1; x < 1000; x++){
        for (int y = 1; y < 1000; y++){
            if (isPalin(conString(x*y)) && (x*y) > greatVal){
                greatVal = x*y;
            }
        }
    }
    cout << greatVal;
}

bool isPalin(string input){
	int length;
	if (input == ""){
		return(false);
	}
	for (length = 0; input[length] != '\0'; length++);
	if (length <= 0) {
		return(false);
	} else if (length == 1) {
        return(true);
	} else if (length % 2 == 0){
		for (int i = 0; i < (length/2) ; i++){
			if (input[i] != input[length - (i + 1)]){
                return(false);
			}
		}
		return(true);
	} else {
        for (int i = 0; i < ((length - 1) /2); i++){
            if (input[i] != input[length - (i + 1)]){
                return(false);
            }
        }
        return(true);
	}
}

string conString (double input){
	ostringstream convert;
	convert << input;
	return (convert.str());
}
