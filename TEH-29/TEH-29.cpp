#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    int num = 5;
    int* ptr = &num;
    cout << "Alkuperäinen arvo: " << *ptr << endl;

    *ptr = 10;

    cout << "Muutettu arvo: " << *ptr << endl;

    return 0;
}