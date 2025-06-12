#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    int registered, age;
    cout << "syötä ikäsi: ";
    cin >> age;
    cout << "Oletko rekisteröitynyt äänestäjäksi? (1 = Kyllä, 0 = Ei): ";
    cin >> registered;
    if (age >= 18) {
        if (registered == 1) {
            cout << "Olet rekisteröitynyt äänestäjä ja täytät äänestysoikeuden vaatimukset." << endl;
        } else {
            cout << "Et ole rekisteröitynyt äänestäjäksi, mutta täytät äänestysoikeuden vaatimukset." << endl;
        }
    } else {
        cout << "Et täytä äänestysoikeuden vaatimuksia." << endl;
    }

}