#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include <iomanip>
#include <fstream>

#define DEBUG

using namespace std;

short letterValue (char letter);
bool isFirstStringLess (string string1, string string2);
long long expStringValue (string word);
void alphSort ();

vector<string> names;

int main(){

long long sumOfScores = 0;

for (int i = 0; i < names.size(); i++){
    sumOfScores += (i + 1) * alphaSum(names[i]);
}
cout << sumOfScores;
system("PAUSE");
}

void alphSort (){
    string swapVal;
    for (int i = 0; i < names.size() -1 ; i++){
        if (expStringValue(names[i]) > expStringValue(names[i + 1])){
            swapVal = names[i + 1];
            names[i + 1] = names[i];
            names[i] = swapVal;
            i = 0
        }
    }
}

long long expStringValue (string word){
    long long StringVal = 0;
    for (int i = 0; i < word.length(); i++){
        StringVal += letterValue(word[i]) * pow(27, word.length() - (i + 1));
        #ifdef DEBUG
        cout << word.length() << " " << i << " " << pow(27, word.length() - (i + 1)) << " " << letterValue(word[i]) << " " << endl;
        #endif
    }
    return (StringVal);
}

long long alphaSum (string word){
    long long sum = 0;
    for (int i = 0; i < word.length(); i++){
        sum += letterValue(word[i])
    }
    return (sum);
}

short letterValue (char letter){
    char letterDict [26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for (short i = 0; i < 26; i++){
        if (letterDict [i] == letter){
            return (i + 1);
        }
    }
    return (-1);
}
