#include<iostream>
using namespace std;
float callcharges(char customertype, char duration, float mins );

main()
{
    char customertype;
    char duration;
    float mins;
    float totalcharges;

    cout << "Enter which type of customer you are(residental or premium) select (R/P):";
    cin >> customertype;
    cout << "(Press 'D' for day or press 'N' for night) call:";
    cin >> duration;
    cout << "Enter number of mins you used the service:";
    cin >> mins;

    totalcharges=callcharges( customertype, duration,  mins );
    cout << totalcharges;

}

float callcharges(char customertype, char duration, float mins )
{
    float charges;
 if (customertype == 'R' && (duration == 'D' || duration== 'N'))
{
    if(mins <= 50)
    {
        charges=10.0;
    }
    if (mins > 50)
    {
        charges=(10+(0.2*mins));
    }
}
   else if (customertype == 'P' )
     {
       if(duration == 'D' && mins <=75)
       {
         charges=25.0;
       }
       if(duration == 'D' && mins > 75)
       {
         charges=(25+(0.10*mins));
       }
        if(duration == 'N' && mins <=100)
       {
         charges=25.0;
       }
       if(duration == 'N' && mins > 100)
       {
         charges=(25+(0.05*mins));
       }
     }
     return charges;

}
