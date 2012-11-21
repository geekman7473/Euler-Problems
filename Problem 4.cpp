#include<iostream>
#include<cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
bool isPalin(string input);

int main(){
    int greatVal = 0;
    for (int x = 1; x < 1000; x++){
        for (int y = 1; y < 1000; y++){
            if (isPalin(string to_string(x*y)) && (x*y) > greatVal){
                greatVal = x*y;
            }
        }
    }
}

bool isPalin(string input){
	if (input.size <= 0) {
		return(false);
	} else if (input.size == 1) {
        return(true);
	} else if (input.size % 2 == 0){
		for (int i = 0; i < (input.size/2) ; i++){
			if (input[i] != input[input.size - (i + 1)]){
                return(false);
			}
		}
		return(true);
	} else {
        for (int i = 0; i < ((input.size - 1) /2); i++){
            if (input[i] != input[input.size - (i + 1)]){
                return(false);
            }
        }
        return(true);
	}
}
