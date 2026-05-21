//C++ if program of BlackJack

#include <iostream>

using namespace std;

void deck(double card_suites[]);
int i;

int main()
{
    //Array for the deck

    double cards_spade[13], cards_club[13], cards_diamond[13], cards_hearts[13];

    cout << "* SUITES *" << endl;
    cout << "Spades:\t\t";
    deck(cards_spade);
    cout << "Clubs:\t\t";
    deck(cards_club);
    cout << "Diamond:\t";
    deck(cards_diamond);
    cout << "Hearts:\t\t";
    deck(cards_hearts);
}

void deck(double card_suites[]) {
    for (i = 0; i < 13; i++)
    {
        card_suites[i] = i + 1;
        if (i == 0)
            cout << "Ace" << " ";
        else if ((i > 0) && (i < 10))
            cout << card_suites[i] << " ";
        else if (i == 10)
            cout << "Jack" << " ";
        else if (i == 11)
            cout << "Queen" << " ";
        else if (i == 12)
            cout << "King" << " ";
    }
    cout << "\n";
}