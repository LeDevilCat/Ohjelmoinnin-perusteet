#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    int taulukko[5] = {1, 2, 3, 4, 5};
    int* ptr = taulukko;
    
    for (int i = 0; i < 5; i++) {
        *(ptr + i) += 1;
    }

    
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}