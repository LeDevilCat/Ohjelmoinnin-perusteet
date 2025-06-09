#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale (LC_ALL, "fi_FI.UTF-8"); // Asetetaan paikaksi Suomi

    cout << "Syötä (0-5) eroteltuina välilyönnein ja ohjelma laskee keskiarvon." << endl;
    double grade1, grade2, grade3;

    cout << "Syötä kolme arvosanaa: ";
    cin >> grade1 >> grade2 >> grade3;
    double average = (grade1 + grade2 + grade3) / 3.0;
    cout << "Arvosanojen keskiarvo on: " << average << endl;
    cout << "Kiitos ohjelman käytöstä!" << endl;
    return 0;
}