#include <iostream>

using namespace std;

int main()
{
        //  1<=Number_friends<=1000....1<=Hight_fence<=1000 .........1<=High_friends<=2*Hight_fence

   int Number_friends ,Hight_fence,High_friends ;

   cin>> Number_friends >> Hight_fence ;


   int counter =0 ;
   int result = 0 ;
   if (Number_friends <=1000 &&Number_friends >=1 &&Hight_fence <=1000 &&Hight_fence >=1  )
   {
       for (counter = 0 ; counter <Number_friends ;counter++ )
   {
       cin>> High_friends;
       if(High_friends <= Hight_fence && High_friends >= 1)
       {
           result++ ;
       }
       else if(High_friends >Hight_fence &&High_friends <= 2*Hight_fence )
       {
           result = result +2 ;
       }

       else {/* Don't do any thing */}
   }
   }

   cout<< result ;

    return 0;
}
