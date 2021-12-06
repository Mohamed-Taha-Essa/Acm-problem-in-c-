#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int arr;
    int i =0 , j=0 ;
    for (i =0 ; i < 5 ; i++ )
    {
         for (j=0 ; j < 5 ; j++ )
        {
            cin>> arr;
            if(arr == 1)
            {
                cout<<abs(i-3) + abs(j-3)<<endl;
                break;
            }
        }
    }

    return 0;
}
