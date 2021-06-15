#include <iostream>
#include <string>

using namespace std;
char Word[50];
int polov, length = 0, sim;
bool check = true;

int main() {
    cout << "Enter a word:";
    cin >> Word;
    while (Word[length])//dovd
        length++;
    polov = (int)(length / 2);
   
    //polov = 
