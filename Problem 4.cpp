#include<iostream>
#include<cmath>
using namespace std;
bool isPalin(string input);

int main(){

}

bool isPalin(string input){
	if (input.size <= 0) {
		return(false);
	} else if (input.size == 1) {
        return(true)
	} else if (input.size % 2 == 0){
		for (int i = 0; i < (input.size/2) ; i++){
			if (input[i] != input[input.size - (i + 1)]){
                return(false);
			}
		}
		return(true);
	} else {
        for (int i = 0; i < ((inputs.size - 1) /2); i++){
            if (input[i] != input[input.size - (i + 1)]){
                return(false);
            }
        }
        return(true);
	}
}
