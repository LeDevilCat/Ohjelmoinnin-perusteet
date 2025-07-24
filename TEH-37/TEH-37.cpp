#include <iostream>
#include <locale>
using namespace std;

class Auto {
private:
    string merkki;
    int vuosimalli;
public:
    void asetaMerkki(const string& uusiMerkki) {
        merkki = uusiMerkki;
    }
    void asetaVuosimalli(int uusiVuosimalli) {
        vuosimalli = uusiVuosimalli;
    }
    string haeMerkki() const {
        return merkki;
    }
    int haeVuosimalli() const {
        return vuosimalli;
    }
    void tulostaTiedot() const {
        cout << "Merkki: " << merkki << ", Vuosimalli: " << vuosimalli << "." << endl;
    }
};

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    Auto akuAuto;
    akuAuto.asetaMerkki("Belchfire Runabout");
    akuAuto.asetaVuosimalli(1934);

    akuAuto.tulostaTiedot();

    return 0;
}