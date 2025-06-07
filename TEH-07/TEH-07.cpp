#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    cout << "Ohjelma tulostaa tietoja ympyrästä, jonka säde on 2 m pitkä." << endl;

    double sade = 2.0; // Ympyrän säde metreinä
    const double pi = 3.141592653589793;

    double A = pi * pow(sade, 2); // Ympyrän pinta-ala
    double p = 2 * pi * sade;     // Ympyrän piiri

    cout << '\n' << "Ympyrän säde: " << sade << " m" << endl;
    cout << "Ympyrän pinta-ala: " << A << " m²" << endl;
    cout << "Ympyrän piiri: " << p << " m" << endl;

    cout << '\n' << "Ohjelma päättyy." << endl;
    return 0;
}