#include <iostream>

using namespace std;

int main()
{
    char letter ;
    int numb_of_games;
    int counter = 0;
    int a = 0 , d = 0 ;
    cin>> numb_of_games ;

    if (numb_of_games<=100000 && numb_of_games >=1)
    {
        for (counter = 0 ; counter <numb_of_games ; counter++)
        {
            cin>> letter;
            if(letter == 'A')
            {
                a++;
            }
            else if(letter == 'D')
            {
                d++ ;
            }
            else {}
        }
    }
    if (a == d )
    {
        cout<< "Friendship" ;
    }
    else if (a > d )
    {
        cout<< "Anton" ;
    }
    else if (d > a )
    {
        cout<< "Danik" ;
    }


        return 0;
}
