#include <iostream>
#include <locale>
using namespace std;

class Kirja {
private:
    string nimi;
    string kirjailija;
    int sivumaara;
public:
    // Konstruktori
    Kirja(const string& n, const string& k, int s) {
        nimi = n;
        kirjailija = k;
        sivumaara = s;
    }
    // Setterit
    void asetaNimi(const string& n) {
        nimi = n;
    }
    void asetaKirjailija(const string& k) {
        kirjailija = k;
    }
    void asetaSivumaara(int s) {
        sivumaara = s;
    }
    // Getterit
    string haeNimi() const {
        return nimi;
    }
    string haeKirjailija() const {
        return kirjailija;
    }
    int haeSivumaara() const {
        return sivumaara;
    }
    // Tulostusmetodi
    void tulostaTiedot() const {
        cout << "Kirja: " << nimi << ", Kirjailija: " << kirjailija << ", Sivumäärä: " << sivumaara << "." << endl;
    }
};

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    Kirja omaKirja("Roope Ankan elämä ja teot", "Don Rosa", 272);
    omaKirja.tulostaTiedot();

}