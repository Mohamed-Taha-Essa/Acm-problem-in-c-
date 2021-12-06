#include <iostream>

using namespace std;

int main()
{
     int number;
     cin>> number ;

            if(number<=100 &&number>=1)
            {
                 int arr[number] ;

                for(int i =0; i<number; i++)
                {
                    int num ;
                    cin>> num ;
                    if(num >=1 && num<=100)
                    {
                        arr[i] = num;
                    }
                }


            for (int i = 0; i < number; i++)
            {
                 for (int j= i; j < number; j++)
                {
                    if(arr[j]<arr[i])
                    {
                        int temp = arr[j];
                        arr[j] = arr[i];
                                                arr[i] = temp;

                    }
                }

            }
            for(int i =0 ; i< number ; i++)
            {
                cout<<arr[i]<<" " ;
            }
            }

    return 0;
}
