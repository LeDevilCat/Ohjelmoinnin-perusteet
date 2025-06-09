#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;

int main () {
    setlocale (LC_ALL, "fi_FI.UTF-8"); // Asetetaan paikaksi Suomi

    cout << "Syötä lämpötila Celsius-asteina ja ohjelma muuntaa sen Fahrenheit-asteiksi." << endl;
    double celsius, fahrenheit;
    cout << "Syötä lämpötila Celsius-asteina: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0; // Lämpötilan muunnos
    cout << fixed << setprecision(2); //säätää desimaalit kahteen
    cout << celsius << "°C on " << fahrenheit << "°F." << endl;
    cout << "Kiitos ohjelman käytöstä!" << endl;
    return 0; 
}