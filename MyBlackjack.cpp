//C++ if program of BlackJack

#include <iostream>

using namespace std;

void deal();


int i;

int main()
{
    //Array for the deck


    srand(time(NULL));

    int num = (rand() % 13) + 1;

    
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

    cout << num;

    void deal();

}

void deal() {

}
