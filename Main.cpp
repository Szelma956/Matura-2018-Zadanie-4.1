
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Tworzenie Tablicy Na Słowa Z Pliku Oraz Jej Stałego Rozmiaru.

const int LICZBA_NAPISOW = 1000;
string napisy[LICZBA_NAPISOW];


int main(int argc, char* argv[])
{ // Int Zlicza Wiersze.
    int licznik = 0;
    //fstream plik("Dane_PR2\\sygnaly.txt");
    //while (!plik.eof() && licznik < LICZBA_NAPISOW) {

    while (!cin.eof() && licznik < LICZBA_NAPISOW) {

        //plik >> napisy[licznik];
        cin >> napisy[licznik];
        licznik++;
    }
    int liczba_wczytanych_napisow = licznik;
    string wynik = "";
 // Definujemy Literator; Warunek; Sposób Przeskoku Do Następnego Elementu.
    for (int i = 39; i < liczba_wczytanych_napisow; i = i +40) {
        //Kopiujemy ity napis.
        string analizowane_slowo = napisy[i];
        //Znajdujemy 10 literę.
        char litera_zczytana = analizowane_slowo[9];
        //Dodajemy litery do ciągu wyniku.
        wynik = wynik + litera_zczytana;
    }
    //Wypluwamy wynik 
    cout << wynik;
    return 0;
}