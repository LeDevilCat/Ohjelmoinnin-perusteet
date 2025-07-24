#include <iostream>
#include <locale>
using namespace std;

// Viittausparametreilla
int teeJotain(int &x, int &y) {
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}

// Osoitinparametreilla
int teeJotain(int* x, int* y) {
    int temp = *x;
    *x = (*y) * 10;
    *y = temp * 10;
    cout << "teeJotain(" << x << ", " << y << ") palauttaa ";
    return *x + *y;
}

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    int a = 5, b = 10;
    int c = 5, d = 10;

    cout << "teeJotain( " << a << ", " << b << " ) palauttaa " << teeJotain(a, b) << "." << endl;
    cout << "teeJotain( " << &c << ", " << &d << " ) palauttaa " << teeJotain(&c, &d) << "." << endl;

    return 0;
}