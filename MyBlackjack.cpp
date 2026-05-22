//C++ if program of BlackJack

#include <iostream>

using namespace std;

void deck(double card_suites[]);

void deal();


int i;

int main()
{
    //Array for the deck

    double cards_spade[13], cards_club[13], cards_diamond[13], cards_hearts[13];

    srand(time(NULL));

    int num = (rand() % 13) + 1;

    cout << "* SUITES *" << endl;
    cout << "Spades:\t\t";
    deck(cards_spade);
    cout << "Clubs:\t\t";
    deck(cards_club);
    cout << "Diamond:\t";
    deck(cards_diamond);
    cout << "Hearts:\t\t";
    deck(cards_hearts);
    
    double numbers_suits[4][13];
    for (int n = 0; n < 4; n++)
    {
        if (n == 0)
            cout << "Spades:\t\t";
        else if (n == 1)
            cout << "Clubs:\t\t";
        else if (n == 2)
            cout << "Diamonds:\t";
        else if (n == 3)
            cout << "Hearts:\t\t";

        for (int s = 0; s < 13; s++)
        {
            numbers_suits[n][s] = s+1;
            cout << numbers_suits[n][s] << " ";
        }
        cout << endl;
    }

    cout << num;

    void deal();

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

void deal() {

}
