#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int ace = 4;
int two = 4;
int three = 4;
int four = 4;
int five = 4;
int six = 4;
int seven = 4;
int eight = 4;
int nine = 4;
int ten = 4;
int jack = 4;
int queen = 4;
int king = 4;

int HitorStay(string HorS)
{
    if (HorS == "hit")
    {
        return 1;
    }
    else
    {
        return 2;
    }
}





int carddraw ()
{
    int cardpicker = rand()% 13 + 1;


    if (cardpicker == 1)
    {
        if (ace == 0)
        {
            return 0;
        }
        else
        {
            ace = ace - 1;
            return 1;
        }
    }
    else if (cardpicker == 2)
    {
        if (two == 0)
        {
            return 0;
        }
        else
        {
            two = two - 1;
            return 2;
        }
    }
    else if (cardpicker == 3)
    {
        if (three == 0)
        {
            return 0;
        }
        else
        {
            three = three - 1;
            return 3;
        }
    }
    else if (cardpicker == 4)
    {
        if (four == 0)
        {
            return 0;
        }
        else
        {
            four = four - 1;
            return 4;
        }
    }
    else if (cardpicker == 5)
    {
        if (five == 0)
        {
            return 0;
        }
        else
        {
            five =five - 1;
            return 5;
        }
    }
    else if (cardpicker == 6)
    {
        if (six == 0)
        {
            return 0;
        }
        else
        {
            six =six - 1;
            return 6;
        }
    }
    else if (cardpicker == 7)
    {
        if (seven == 0)
        {
            return 0;
        }
        else
        {
            seven =seven - 1;
            return 7;
        }
    }
    else if (cardpicker == 8)
    {
        if (eight == 0)
        {
            return 0;
        }
        else
        {
            eight =eight - 1;
            return 8;
        }
    }
    else if (cardpicker == 9)
    {
        if (nine == 0)
        {
            return 0;
        }
        else
        {
            nine =nine - 1;
            return 9;
        }
    }
    else if (cardpicker == 10)
    {
        if (ten == 0)
        {
            return 0;
        }
        else
        {
            ten =ten - 1;
            return 10;
        }
    }
    else if (cardpicker == 11)
    {
        if (jack == 0)
        {
            return 0;
        }
        else
        {
            jack =jack - 1;
            return 10;
        }
    }
    else if (cardpicker == 12)
    {
        if (queen == 0)
        {
            return 0;
        }
        else
        {
            queen =queen - 1;
            return 10;
        }
    }
    else if (cardpicker == 13)
    {
        if (king == 0)
        {
            return 0;
        }
        else
        {
            king =king - 1;
            return 10;
        }
    }


}

void playonce()
{
    srand(time(NULL));
    int sum = 0;
    int gameon = 1;
    int firstdraw = 0;
    int seconddraw = 0;
    firstdraw = carddraw();
    if (firstdraw == 0)
    {
        firstdraw = carddraw();
    }
    seconddraw = carddraw();
    if (seconddraw == 0)
    {
        seconddraw = carddraw();
    }
    int nextdraw = 0;
    cout << "You got a " << firstdraw << " and a " << seconddraw << endl;
    sum = firstdraw + seconddraw;
    cout << "Your sum is " << sum << endl;
    cout << "Hit or stay? (type out answer)" << endl;
    string HorS = "stay";
    cin >> HorS;
    gameon = HitorStay(HorS);
    while (gameon == 1)
    {
        nextdraw = carddraw();
        if ( nextdraw == 0)
        {
            nextdraw = carddraw();
        }
        else
        {
            cout << "You got a " << nextdraw << endl;
            sum = sum + nextdraw;
            cout << "Your sum is " << sum << endl;
            if (sum > 21)
            {
                gameon = 2;
                cout << "You busted!" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " " << endl;
            }
            else
            {
                cout << "Hit or stay? (type out answer)" << endl;
                cin >> HorS;
                gameon = HitorStay(HorS);
            }
        }

    }
    cout << " " << endl;
    cout << " " << endl;
}








int main()
{
    cout << "Please enter number of players: " << endl;
    int numberofplayers = 1;
    cin >> numberofplayers;
    cout << " " << endl;
    cout << " " << endl;
    for (int i = 0; i < numberofplayers; i = i + 1)
    {
            playonce();

    }
    return 0;

}
