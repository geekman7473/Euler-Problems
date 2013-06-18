#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void multiply(int base);
void add(unsigned long long n);

#define ARRAYSIZE 8000

vector<unsigned long long> productA(1);
vector<unsigned long long> productB(1);
//const int productLength = ARRAYSIZE;

int main(){
    long long digits;
    cout << "Find first Fibo with X digits: ";
    cin >> digits;
	productA[0] = 1;
	productB[0] = 1;
	cout << productA[0] << endl;
	cout << productB[0] << endl;
    long long currentterm = 2;
	while(productB.size() < digits){
    vector<unsigned long long> tempSum(1);
    tempSum.clear();
    for(long i = 0; i< productB.size(); i++){
        if (i >= productA.size()){
            tempSum.push_back(productB[i]);
        }else{
        tempSum.push_back(productA[i] + productB[i]);
        }
    }
	productA = productB;
	productB = tempSum;
		for (int pos = 0; pos < productA.size(); ++pos){//goes through digits
			for (double y = 1; productA[pos] >= 10; ++y){//Carrys digits accordingly
		    	if (y != 0){
                        //cout << pos << " "<< pos + y << " " << productA.size() << endl;
                        //system("PAUSE");
              		if(pos + (int)y > productA.size()-1){
              		    //cout << "test";
						productA.push_back (floor(productA [pos] / pow(10, y)));
						productA[pos] -= floor(productA [pos] / pow(10, y)) * 10;
              		} else {
		       			productA[pos + (int)y] += floor(productA [pos] / pow(10, y));
		       			productA[pos] -= floor(productA [pos] / pow(10, y)) * 10;
					}
           		}
			}
		}
		for (int pos = 0; pos < productB.size(); ++pos){//goes through digits
			for (double y = 1; productB[pos] >= 10; ++y){//Carrys digits accordingly
		    	if (y != 0){
                        //cout << pos << " "<< pos + y << " " << productB.size() << endl;
                        //system("PAUSE");
              		if(pos + (int)y > productB.size()-1){
              		    //cout << "test";
						productB.push_back (floor(productB [pos] / pow(10, y)));
						productB[pos] -= floor(productB [pos] / pow(10, y)) * 10;
              		} else {
		       			productB[pos + (int)y] += floor(productB [pos] / pow(10, y));
		       			productB[pos] -= floor(productB [pos] / pow(10, y)) * 10;
					}
           		}
			}
		}
	currentTerm++;
	}
    for(long i = productB.size() -1; i>= 0; i--){
        cout << productB[i];
    }
    cout << endl << endl << endl;
    cout << currentTerm << endl << productA.size() << endl << productB.size();
	system("PAUSE");
	return(0);
}
