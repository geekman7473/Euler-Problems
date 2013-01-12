#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

#define DEBUG

using namespace std;

short letterValue (char letter);
bool isFirstStringLess (string string1, string string2);
long long expStringValue (string word);

int main(){
cout << letterValue('A') << " " << letterValue('Z') << " " << expStringValue("JOHN");
system("PAUSE");
}

long long expStringValue (string word){
    long long StringVal = 0;
    for (int i = 0; i < word.length(); i++){
        StringVal += letterValue(word[i]) * pow(26, word.length() - (i + 1));
        #ifdef DEBUG
        cout << word.length() << " " << i << " " << pow(26, word.length() - (i + 1)) << " " << letterValue(word[i]) << " " << endl;
        #endif
    }
    return (StringVal);
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
