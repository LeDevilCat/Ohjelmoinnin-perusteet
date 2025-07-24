#include <iostream>
#include <locale>
using namespace std;

class Henkilo {
private:
    string nimi;
    int ika;
public:
    void asetaNimi(const string& uusiNimi) {
        nimi = uusiNimi;
    }
    void asetaIka(int uusiIka) {
        ika = uusiIka;
    }
    string haeNimi() const {
        return nimi;
    }
    int haeIka() const {
        return ika;
    }
};

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    Henkilo h;
    h.asetaNimi("Aku Ankka");
    h.asetaIka(30);

    cout << "Nimi: " << h.haeNimi() << ", Ikä: " << h.haeIka() << "." << endl;

    return 0;
}