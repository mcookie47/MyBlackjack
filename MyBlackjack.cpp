/*
 * C++ program of BlackJack
 * Created by: [Matt]
 * Date: 05/20/26
 *
 * Description: Simulation of the game Blackjack with only 1 deck of cards.
 */

#include <iostream>

using namespace std;

void deal();


int main()
{
    //Array for the deck


    srand(time(NULL));
    
    double suits_numbers[4][13];

    for (int s = 0; s < 4; s++)
    {
        if (s == 0)
            cout << "Spades:\t\t";
        else if (s == 1)
            cout << "Clubs:\t\t";
        else if (s == 2)
            cout << "Diamonds:\t";
        else if (s == 3)
            cout << "Hearts:\t\t";

        for (int n = 0; n < 13; n++)
        {
            suits_numbers[s][n] = n+1;
            if (n == 0)
                cout << "Ace" << " ";
            else if ((n >= 1) && (n <= 9))
                cout << suits_numbers[s][n] << " ";
            else if (n == 10)
                cout << "Jack" << " ";
            else if (n == 11)
                cout << "Queen" << " ";
            else if (n == 12)
                cout << "King" << " ";
        }
        cout << endl;
    }

    cout << "Blackjack ($5 Minimum)" << endl;
    int i;
    int x;
    int y;
    double player_card1, player_card2;
    double dealer_card1, dealer_card2;

    for (i = 0; i < 4; i++)
    {
        x = (rand() % 4);
        y = (rand() % 13);
        if (i == 0)
        {
            player_card1 = suits_numbers[x][y];
            cout << "Player Card 1: " << player_card1 << endl;
        }
        else if (i == 1)
        {
            dealer_card1 = suits_numbers[x][y];
            cout << "Dealer Card 1: " << dealer_card1 << endl;
        }
        else if (i == 2)
        {
            player_card2 = suits_numbers[x][y];
            cout << "Player Card 2: " << player_card2 << endl;
        }
        else if (i == 3)
        {   dealer_card2 = suits_numbers[x][y];
            cout << "Dealer Card 1: " << dealer_card1 << endl;   }

        cout << "X: " << x << " Y: " << y << endl;
    }

    cout << dealer_card1 << " " << dealer_card2 << endl;
    cout << player_card1 << " " << player_card2;

    void deal();

}

void deal() {

}
