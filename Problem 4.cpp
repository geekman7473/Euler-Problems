#include<iostream>
#include<cmath>
using namespace std;
long long int largePrime = 600851475143;
bool isPalin(string input);

int main(){

}

bool isPalin(string input){
	bool Palindrome;
	if (input.size == 0) {
		return(false);
	} else if (input.size % 2 == 0){
		for (int i = 0; i < (input.size/2) ; i++){
			if (input[i] != input[input.size - (i + 1)]){
				palindrome = false;
				break;
			{
		}
	} else
}
