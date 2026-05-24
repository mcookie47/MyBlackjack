/*
 * C++ program of BlackJack
 * Created by: [Matt]
 * Date: 05/20/26
 *
 * Description: Simulation of the game Blackjack with only 1 deck of cards.
 */

#include <iostream>

using namespace std;

void card_assign(int x, int y, int i, string card);

void deal();


int main()
{
    //Array for the deck


    srand(time(NULL));
    
    double suits_numbers[4][13];
    string card;


    // s stands for suits, n are the numbers and face cards
    for (int s = 0; s < 4; s++)
    {
        if (s == 0)
        {
            cout << "Spades:\t\t";
        }
        else if (s == 1)
        {
            cout << "Clubs:\t\t";
        }
        else if (s == 2)
        {
            cout << "Diamonds:\t";
        }
        else if (s == 3)
        {
            cout << "Hearts:\t\t";
        }

        for (int n = 0; n < 13; n++)
        {
            suits_numbers[s][n] = n+1;
            if (n == 0)
                cout << "Ace" << " ";
            else if ((n >= 1) && (n <= 9))
                cout << suits_numbers[s][n] << " ";
            else if (n == 10)
            {
                suits_numbers[s][n] = 10;
                cout << "Jack" << " ";
            }
            else if (n == 11)
            {
                suits_numbers[s][n] = 10;
                cout << "Queen" << " ";
            }
            else if (n == 12)
            {
                suits_numbers[s][n] = 10;
                cout << "King" << " ";
            }
        }
        cout << endl;
    }

    cout << "Blackjack ($5 Minimum)" << endl;
    
    // Deal random cards to the player and then the dealer
    // Cards cannot be repeated
    // Show cards by assigning each array to a card

    int i;
    int x;
    int y;
    double player_card1, player_card2;
    double dealer_card1, dealer_card2;
    double player_total = 0;
    double dealer_total = 0;

    for (i = 0; i < 4; i++)
    {
        x = (rand() % 4);
        y = (rand() % 13);
        if (i == 0)
        {
            player_card1 = suits_numbers[x][y];
            card_assign(x, y, i, card);
            
        }
        else if (i == 1)
        {
            dealer_card1 = suits_numbers[x][y];
            card_assign(x, y, i, card);
            
        }
        else if (i == 2)
        {
            player_card2 = suits_numbers[x][y];
            card_assign(x, y, i, card);
            
        }
        else if (i == 3)
        {   dealer_card2 = suits_numbers[x][y];
            card_assign(x, y, i, card);
            
        }
        cout << "X: " << x << " Y: " << y << endl;
    }

    cout << "Dealer Hand: " << dealer_card1 << " " << dealer_card2 << endl;
    dealer_total = dealer_card1 + dealer_card2;
    cout << "Dealer Total: " << dealer_total << endl << endl;
    
    cout << "Player Hand: " << card << " " << player_card2 << endl;
    player_total = player_card1 + player_card2;
    cout << "Player Total: " << player_total << endl;

    char hit;
    double player_card3;


    if ((player_total < 21) && (dealer_total != 21)) {
        cout << "Hit? (Y/N)" << endl;
        cin >> hit;
        if ((hit == 'Y') || (hit == 'y'))
        {
            player_card3 = suits_numbers[x][y];
            cout << "Player Card 3: " << player_card3 << endl;
            cout << "Player Hand: " << player_card1 << " " << player_card2 << " " << player_card3 << endl;
            player_total = player_card1 + player_card2 + player_card3;
            cout << "Player Total: " << player_total << endl;
        }
        else if ((hit == 'N') || (hit == 'n'))
        {

        }
        if ((player_total > dealer_total) && (player_total <= 21))
            cout << "WIN!" << endl;
        else
            cout << "LOST!" << endl;
    }
    void deal();

}

void card_assign(int x, int y, int i, string card) {
    /* 
    x = 0: Spades
    x = 1: Clubs
    x = 2: Diamonds
    x = 0: Hearts
    y = 0: Aces
    y = 1-9: 2-10
    y = 10, 11, 12: Jack, Queen, King 
    */

    //
    // 
    // SPADE CARDS
    //
    //
    if ((x == 0) && (y == 0))
    {
        card = "AS";
    }
    else if ((x == 0) && (y == 1))
    {
        card = "2S";
    }
    else if ((x == 0) && (y == 2))
    {
        card = "3S";
    }
    else if ((x == 0) && (y == 3))
    {
        card = "4S";
    }
    else if ((x == 0) && (y == 4))
    {
        card = "5S";
    }
    else if ((x == 0) && (y == 5))
    {
        card = "6S";
    }
    else if ((x == 0) && (y == 6))
    {
        card = "7S";
    }
    else if ((x == 0) && (y == 7))
    {
        card = "8S";
    }
    else if ((x == 0) && (y == 8))
    {
        card = "9S";
    }
    else if ((x == 0) && (y == 9))
    {
        card = "10S";
    }
    else if ((x == 0) && (y == 10))
    {
        card = "JS";
    }
    else if ((x == 0) && (y == 11))
    {
        card = "QS";
    }
    else if ((x == 0) && (y == 12))
    {
        card = "KS";
    }

    //
    // 
    // CLUB CARDS
    //
    //
    if ((x == 1) && (y == 0))
    {
        card = "AC";
    }
    else if ((x == 1) && (y == 1))
    {
        card = "2C";
    }
    else if ((x == 1) && (y == 2))
    {
        card = "3C";
    }
    else if ((x == 1) && (y == 3))
    {
        card = "4C";
    }
    else if ((x == 1) && (y == 4))
    {
        card = "5C";
    }
    else if ((x == 1) && (y == 5))
    {
        card = "6C";
    }
    else if ((x == 1) && (y == 6))
    {
        card = "7C";
    }
    else if ((x == 1) && (y == 7))
    {
        card = "8C";
    }
    else if ((x == 1) && (y == 8))
    {
        card = "9C";
    }
    else if ((x == 1) && (y == 9))
    {
        card = "10C";
    }
    else if ((x == 1) && (y == 10))
    {
        card = "JC";
    }
    else if ((x == 1) && (y == 11))
    {
        card = "QC";
    }
    else if ((x == 1) && (y == 12))
    {
        card = "KC";
    }

    //
    // 
    // DIAMONDS CARDS
    //
    //
    if ((x == 2) && (y == 0))
    {
        card = "AD";
    }
    else if ((x == 2) && (y == 1))
    {
        card = "2D";
    }
    else if ((x == 2) && (y == 2))
    {
        card = "3D";
    }
    else if ((x == 2) && (y == 3))
    {
        card = "4D";
    }
    else if ((x == 2) && (y == 4))
    {
        card = "5D";
    }
    else if ((x == 2) && (y == 5))
    {
        card = "6D";
    }
    else if ((x == 2) && (y == 6))
    {
        card = "7D";
    }
    else if ((x == 2) && (y == 7))
    {
        card = "8D";
    }
    else if ((x == 2) && (y == 8))
    {
        card = "9D";
    }
    else if ((x == 2) && (y == 9))
    {
        card = "10D";
    }
    else if ((x == 2) && (y == 10))
    {
        card = "JD";
    }
    else if ((x == 2) && (y == 11))
    {
        card = "QD";
    }
    else if ((x == 2) && (y == 12))
    {
        card = "KD";
    }

    //
    // 
    // HEART CARDS
    //
    //
    if ((x == 3) && (y == 0))
    {
        card = "AH";
    }
    else if ((x == 3) && (y == 1))
    {
        card = "2H";
    }
    else if ((x == 3) && (y == 2))
    {
        card = "3H";
    }
    else if ((x == 3) && (y == 3))
    {
        card = "4H";
    }
    else if ((x == 3) && (y == 4))
    {
        card = "5H";
    }
    else if ((x == 3) && (y == 5))
    {
        card = "6H";
    }
    else if ((x == 3) && (y == 6))
    {
        card = "7H";
    }
    else if ((x == 3) && (y == 7))
    {
        card = "8H";
    }
    else if ((x == 3) && (y == 8))
    {
        card = "9H";
    }
    else if ((x == 3) && (y == 9))
    {
        card = "10H";
    }
    else if ((x == 3) && (y == 10))
    {
        card = "JH";
    }
    else if ((x == 3) && (y == 11))
    {
        card = "QH";
    }
    else if ((x == 3) && (y == 12))
    {
        card = "KH";
    }

    if (i == 0) {
        cout << "Player Card 1: " << card << endl;
    }
    else if (i == 1) {
        cout << "Dealer Card 1: " << card << endl;
    }
    else if (i == 2) {
        cout << "Player Card 2: " << card << endl;
    }
    else if (i == 3) {
        cout << "Dealer Card 2: " << card << endl;
    }
}

//Note: use pointers to assign the cards

void deal() {

}
