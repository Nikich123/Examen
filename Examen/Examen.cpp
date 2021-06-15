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
    for (sim = 0; sim < polov; sim++)
    {
        if (Word[sim] != Word[length - sim - 1])
        {
            check = false;
            break;
        }
    }
    if (check)
        cout << "\Word " << Word << " is palindrom.\n";
    else
        cout << "\Word " << Word << " is not palindrom.\n";
}