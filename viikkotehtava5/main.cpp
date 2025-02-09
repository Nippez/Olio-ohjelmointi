#include "notifikaattori.h"

int main() {
    Notifikaattori notifier;
    auto s1 = std::make_shared<Seuraaja>("Kalle");
    auto s2 = std::make_shared<Seuraaja>("Leeevi");
    auto s3 = std::make_shared<Seuraaja>("Tempo");

    notifier.lisaa(s1);
    notifier.lisaa(s2);
    notifier.lisaa(s3);

    notifier.tulosta();
    notifier.postita("vastaus on positiivinen");

    notifier.poista(s2);
    notifier.tulosta();
    notifier.postita("Toinen viesti");

    return 0;
}

