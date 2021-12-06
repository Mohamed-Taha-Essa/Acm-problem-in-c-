#include <iostream>

using namespace std;

int main()
{
    int limak , bob ;
    cin>> limak >> bob ;
    int counter = 0 ;
    if ( limak >= 1 && limak <= bob && bob <= 10 )
    {
        while (limak <= bob)
        {
            limak = limak*3 ;
            bob = bob*2 ;
            counter++ ;
        }
        cout<< counter ;
    }
    return 0;
}
