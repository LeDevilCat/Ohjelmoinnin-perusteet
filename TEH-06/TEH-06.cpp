#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8"); // Set locale to Finnish (Finland) with UTF-8 encoding

    cout << "Ohjelma kysyy etu- ja sukunimen, ja tulostaa ne yhdistettynä." << endl;
    
    cout << "Syötä etunimesi: ";
    string etunimi;
    cin >> etunimi;

    cout << "Syötä sukunimesi: ";
    string sukunimi;
    cin >> sukunimi;

    // Tulostetaan etu- ja sukunimi yhdistettynä
    cout << "Tervehdys, " << etunimi << " " << sukunimi << "!" << endl;

    cout << "\nOhjelma päättyy." << endl;
    return 0;
}