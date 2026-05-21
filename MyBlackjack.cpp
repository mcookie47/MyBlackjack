//C++ if program of BlackJack

#include <iostream>

using namespace std;

int main()
{
    //Array for the deck
    int i;
    int cards_spade[13], cards_club[13], cards_diamond[13], cards_hearts[13];
    for (i = 0; i < 13; i++)
    {
        cards_spade[i] = i + 1;
        cout << cards_spade[i] << " ";
    }
    
    for (i = 0; i < 13; i++)
    {
        cards_spade[i] = i + 1;
        cout << cards_spade[i] << " ";
    }
}

