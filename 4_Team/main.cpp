#include <iostream>

using namespace std;

int main()
{
    int Number_problem;
    int solution = 0 ;
    cin>> Number_problem;
     int Petya[Number_problem];
     int Vasya[Number_problem];
     int Tonya[Number_problem];
     int counter = 0 ;
     if(Number_problem <=1000 && Number_problem >=1)
     {
          for (counter =0 ; counter <Number_problem;counter++)
     {
         cin>>Petya[counter] >> Vasya[counter]>>Tonya[counter];
         if(Petya[counter] == 1 &&Vasya[counter]==1  &&Tonya[counter]==1)
         {
             solution++;
         }
         else if (Vasya[counter]==1 && Tonya[counter]==1)
         {
            solution++;
         }
          else if (Petya[counter] == 1 &&Vasya[counter]==1)
         {
            solution++;
         }
         else if (Petya[counter] == 1 &&Tonya[counter]==1)
         {
            solution++;
         }

         else{}
     }
     cout<<solution ;
     }

    return 0;
}
