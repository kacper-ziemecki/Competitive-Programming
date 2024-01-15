#include <bits/stdc++.h>
using namespace std;

void sitoErastotenesa(int n) {
    list<int> liczbyPierwsze;

    for (int i = 3; i <= n; ++i) {
        if (i % 2 != 0) {
            liczbyPierwsze.push_back(i);
        }
    }

    auto it = liczbyPierwsze.begin();

    while (it != liczbyPierwsze.end()) {
        int aktualnaLiczba = *it;

        auto nastepna = it;
        ++nastepna;

        while (nastepna != liczbyPierwsze.end()) {
            if (*nastepna % aktualnaLiczba == 0) {
                nastepna = liczbyPierwsze.erase(nastepna);
            } else {
                ++nastepna;
            }
        }

        ++it;
    }

    for (int liczbaPierwsza : liczbyPierwsze) {
        cout << liczbaPierwsza << endl;
    }
}

int main() {
    freopen("liczby.txt", "w", stdout);
    int n;
    cin >> n;

    sitoErastotenesa(n);

    return 0;
}
