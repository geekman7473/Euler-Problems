#include<iostream>
#include<cmath>
#include<vector>
#include<cstdlib>
#include<fstream>
#include <algorithm>

using namespace std;

short permutations[] = {0,1,2,3,4,5,6,7,8,9};

int main(){
	ofstream output ("Problem24Debug.txt");

    for(long i = 1; i <= 999999; i++){
        //cout << "test" << endl;
        next_permutation(permutations, permutations + 10);
    }

	cout << endl << permutations[0] << " "<< permutations[1] << " "<< permutations[2] << " "<< permutations[3] << " "<< permutations[4] << " "<< permutations[5] << " "<< permutations[6] << " "<< permutations[7] << " "<< permutations[8] << " "<< permutations[9] << endl;
	return 0;
}


