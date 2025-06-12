#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    int num1, num2, answer;
    cout << "Syötä ensimmäinen kokonaisluku: ";
    cin >> num1;
    cout << "Syötä toinen kokonaisluku: ";
    cin >> num2;
    cout << "Toiminnot:\nYhteenlasku: 1\nVähennyslasku: 2\nKertolasku: 3\nJakolasku: 4\n";
    cout << "Valitse toiminto (1-4): ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            answer = num1 + num2;
            cout << "Tulos: " << answer << endl;
            break;
        case 2:
            answer = num1 - num2;
            cout << "Tulos: " << answer << endl;
            break;
        case 3:
            answer = num1 * num2;
            cout << "Tulos: " << answer << endl;
            break;
        case 4:
            if (num2 != 0) {
                answer = num1 / num2;
                cout << "Tulos: " << answer << endl;
            } else {
                cout << "Nollalla jakaminen ei ole sallittua." << endl;
            }
            break;
        default:
            cout << "Virheellinen valinta." << endl;
            return 1;
    }
    return 0;
}