#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;

// Funktio, joka laskee fahrenheitista celsius-asteet
double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    cout << fixed << setprecision(1);
    cout << "Fahrenheit     Celsius" << endl;
    cout << "----------------------" << endl;

    for (double f = 0.0; f <= 20.0; f += 1.0) {
        double c = celsius(f);
        cout << setw(9) << f << setw(12) << c << endl;
    }

    return 0;
}
