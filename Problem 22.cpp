#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<vector>

#define DEBUG

using namespace std;
#ifdef DEBUG
void vectorTest(bool isPause);
#endif
short letterValue (char letter);
bool isFirstStringLess (string string1, string string2);
long long expStringValue (string word);
void alphSort ();
void populate_vector();
long long alphaSum (string word);

vector<string> names;

int main(){

    populate_vector();

    alphSort();
    cout << "TEST";
    system("PAUSE");
    vectorTest(false);

    long long sumOfScores = 0;

    for (int i = 0; i < names.size(); i++){
        sumOfScores += (i + 1) * alphaSum(names[i]);
    }
    cout << sumOfScores;
    system("PAUSE");
}

void alphSort (){
    string swapVal;
    bool isSorted = false, actionTaken;
    do {
    actionTaken = false;
    for (int i = 0; i < names.size() -1 ; i++){
        if (names[i] > names[i + 1]){
            //isSorted = false;
            actionTaken = true;
            swapVal = names[i + 1];
            names[i + 1] = names[i];
            names[i] = swapVal;
        }
    }
    if (!actionTaken){
        isSorted = true;
    }
    } while (!isSorted);
}

/*long long expStringValue (string word){
    long long StringVal = 0;
    for (int i = 0; i < word.length(); i++){
        StringVal += letterValue(word[i]) * pow(27, word.length() - (i + 1));
        #ifdef DEBUG
        //cout << word.length() << " " << i << " " << pow(27, word.length() - (i + 1)) << " " << letterValue(word[i]) << " " << endl;
        #endif
    }
    return (StringVal);
}*/

long long alphaSum (string word){
    long long sum = 0;
    for (int i = 0; i < word.length(); i++){
        sum += letterValue(word[i]);
    }
    return (sum);
}

short letterValue (char letter){
    char letterDict [26] = {'A','B','C','D','E','F','GInput.length() - 1','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for (short i = 0; i < 26; i++){
        if (letterDict [i] == letter){
            return (i + 1);
        }
    }
    return (-1);
}

void populate_vector(){

    string Input;

    ifstream openFile;
    openFile.open("Problem22names.txt");

    if(!openFile.is_open()){
        cout << "FILE READ ERROR!" << endl;
        system("PAUSE");
        exit(EXIT_FAILURE);
    }
    openFile >> Input;
    //cout << Input;
    string tempWord = "";
    cout << Input.length() << " ";
    for (long i = 0; i <= Input.length(); i++){
            //cout << "TEST1 " << endl;
        if (Input[i] == '"'){
        } else if (Input[i] == ',' || i == Input.length()){
            //cout << endl << i;
            names.push_back(tempWord);
            tempWord = "";
        } else {
            tempWord.append(Input.substr(i,1));
        }
    }
    vectorTest(false);
}

#ifdef DEBUG
void vectorTest(bool isPause){
    cout << endl << names.size() << " ";
    for (int i = 0; i < names.size(); i++){
        cout << names[i] << endl;
        if (isPause){
        system("PAUSE");
        }
    }
}
#endif DEBUG
