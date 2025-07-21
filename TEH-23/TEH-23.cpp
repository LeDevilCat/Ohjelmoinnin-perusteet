#include <iostream>
#include <locale>
using namespace std;


void onkoParillinen (int num) {
    if (num % 2 == 0) {
        cout << "Luku " << num << " on parillinen." << endl;
    } else {
        cout << "Luku " << num << " on pariton." << endl;
    }
}


int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    int num;
    cout << "Syötä kokonaisluku: ";
    cin >> num;
    onkoParillinen(num);
    return 0;
}
