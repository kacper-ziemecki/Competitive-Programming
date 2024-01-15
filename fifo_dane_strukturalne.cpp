#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class Pacjent {
public:
    std::string imie_nazwisko;
    std::string nr_dokumentu;
    std::string jednostka_chorobowa;
};

class KolejkaPrzychodni {
private:
    std::vector<Pacjent> kolejka;

public:
    void generujDanePacjenta() {
        Pacjent pacjent;
        // Przykładowe dane
        const std::string imiona[] = {"Jan", "Anna", "Marek", "Ewa", "Krzysztof", "Alicja", "Piotr", "Katarzyna", "Andrzej", "Małgorzata", "Michał", "Agata", "Tomasz", "Monika", "Marcin", "Aneta", "Bartłomiej", "Joanna", "Paweł", "Magdalena", "Adam", "Beata", "Mateusz", "Kinga", "Robert", "Kamila", "Łukasz", "Natalia", "Grzegorz", "Karolina", "Wojciech", "Elżbieta", "Rafał", "Sylwia", "Jakub", "Dominika", "Artur", "Klaudia", "Przemysław", "Patrycja", "Daniel", "Aleksandra", "Arkadiusz", "Iwona", "Radosław", "Karolina"};
        const std::string nazwiska[] = {"Kowalski", "Nowak", "Wiśniewski", "Wójcik", "Kowalczyk", "Lewandowska", "Dąbrowski", "Wilk", "Jankowski", "Mazur", "Nowakowski", "Kwiatkowska", "Wojciechowski", "Kamińska", "Kowalewska", "Zając", "Krawczyk", "Piotrowski", "Pawłowska", "Grabowski", "Wrona", "Adamczyk", "Dudek", "Majewska", "Stępień", "Witkowski", "Marciniak", "Zalewska", "Sawicki", "Kucharski", "Sokołowska", "Wawrzyniak", "Wesołowska", "Olszewski", "Maj", "Nawrocki", "Wójcicki", "Rutkowski", "Stasiak", "Baran", "Sikora", "Ostrowski", "Tomaszewski", "Wierzbicki", "Kubiak", "Kaczmarek", "Mazurek"};
        const std::string jednostki_chorobowe[] = {"A00", "B01", "C02", "D03", "E04", "F05", "G06", "H07", "I08", "J09", "K10", "L11", "M12", "N13", "O14", "P15", "Q16", "R17", "S18", "T19", "U20", "V21", "W22", "X23", "Y24", "Z25", "A26", "B27", "C28", "D29", "E30", "F31", "G32", "H33", "I34", "J35", "K36", "L37", "M38", "N39", "O40", "P41", "Q42", "R43", "S44", "T45", "U46", "V47", "W48", "X49"};

        pacjent.imie_nazwisko = imiona[rand() % 50] + " " + nazwiska[rand() % 50];
        pacjent.nr_dokumentu = generujNrDokumentu();
        pacjent.jednostka_chorobowa = jednostki_chorobowe[rand() % 50];

        kolejka.push_back(pacjent);
    }

    void przyjmijPacjenta() {
        if (!kolejka.empty()) {
            Pacjent pacjent = kolejka.front();
            std::cout << "Przyjęto pacjenta do obsługi:" << std::endl;
            std::cout << "Imię i nazwisko: " << pacjent.imie_nazwisko << std::endl;
            std::cout << "Nr dokumentu: " << pacjent.nr_dokumentu << std::endl;
            std::cout << "Jednostka chorobowa: " << pacjent.jednostka_chorobowa << std::endl;

            kolejka.erase(kolejka.begin());
        } else {
            std::cout << "Kolejka jest pusta." << std::endl;
        }
    }

    void wyswietlPierwszegoPacjenta() {
        if (!kolejka.empty()) {
            Pacjent pacjent = kolejka.front();
            std::cout << "Dane pierwszego pacjenta w kolejce:" << std::endl;
            std::cout << "Imię i nazwisko: " << pacjent.imie_nazwisko << std::endl;
            std::cout << "Nr dokumentu: " << pacjent.nr_dokumentu << std::endl;
            std::cout << "Jednostka chorobowa: " << pacjent.jednostka_chorobowa << std::endl;
        } else {
            std::cout << "Kolejka jest pusta." << std::endl;
        }
    }

    void wyswietlStanKolejki() {
        if (!kolejka.empty()) {
            std::cout << "Stan kolejki:" << std::endl;
            for (const Pacjent& pacjent : kolejka) {
                std::cout << "Imię i nazwisko: " << pacjent.imie_nazwisko << ", ";
                std::cout << "Nr dokumentu: " << pacjent.nr_dokumentu << ", ";
                std::cout << "Jednostka chorobowa: " << pacjent.jednostka_chorobowa << std::endl;
            }
        } else {
            std::cout << "Kolejka jest pusta." << std::endl;
        }
    }

    void wyczyscKolejke() {
        kolejka.clear();
        std::cout << "Kolejka została wyczyszczona." << std::endl;
    }

private:
    std::string generujNrDokumentu() {
        const std::string litery = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        const std::string cyfry = "0123456789";

        std::string nrDokumentu;
        for (int i = 0; i < 3; ++i) {
            nrDokumentu += litery[rand() % 26];
        }
        for (int i = 0; i < 6; ++i) {
            nrDokumentu += cyfry[rand() % 10];
        }

        return nrDokumentu;
    }
};

int main() {

    srand(static_cast<unsigned int>(time(nullptr)));

    KolejkaPrzychodni kolejka;

    // Testowanie funkcjonalności
    for (int i = 0; i < 5; ++i) {
        kolejka.generujDanePacjenta();
    }
    kolejka.wyswietlStanKolejki();

    kolejka.przyjmijPacjenta();
    kolejka.wyswietlStanKolejki();

    kolejka.wyswietlPierwszegoPacjenta();
    kolejka.wyczyscKolejke();
    kolejka.wyswietlStanKolejki();

    return 0;
}
