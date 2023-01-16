#include<iostream>
using namespace std;
float apartmentstay(string month, int stays);
float studiostay(string month, int stays);

main()
{
      string month;
      int stays;
      float apartmentprice;
      float studioprice;
      cout << "enter the month (may, oct, june, sep, july, august)=";
      cin >> month;
      cout << "enter no of stays - an integer within range of [0..200]=";
      cin >> stays;

       apartmentprice=apartmentstay( month,  stays);
       cout << "Apartment=" << apartmentprice << "$" << endl ;
       studioprice=studiostay( month,  stays);
       cout << "studio=" << studioprice << "$" ;

}

float apartmentstay(string month, int stays)
{
    float price;
    float bdiscount;

  if(month == "may" || month == "oct")
  {
    if(stays <= 14 )
    {
       price=stays*65;
    }
    if(stays > 14 )
    {

       bdiscount=stays*65;
       price=bdiscount-(bdiscount*0.1);
    }
  }
 
  else if(month == "june" || month == "sep")
  {
    if(stays <= 14 )
    {
       price=stays*68.70;
    }
    if(stays > 14 )
    {

       bdiscount=stays*68.70;
       price=bdiscount-(bdiscount*0.1);
    }
  }

 else if(month == "july" || month == "august")
  {
    if(stays <= 14 )
    {
       price=stays*77;
    }
    if(stays > 14 )
    {

       bdiscount=stays*77;
       price=bdiscount-(bdiscount*0.1);
    }
  }
       return price; 
}

float studiostay(string month, int stays)
{
      float price1;
      float bdiscount;

   if(month == "may" || month == "oct")
   {
      if(stays > 7 && stays < 14 )
    {
       bdiscount=stays*50;
       price1=bdiscount-(bdiscount*0.05);
    }
    if(stays > 14 )
    {
       bdiscount=stays*50;
       price1=bdiscount-(bdiscount*0.3);
    }
   }

   else if(month == "june" || month == "sep")
   {
      if(stays <= 14 )
    {
       price1=stays*75.20;
    }
    if(stays > 14 )
    {
       bdiscount=stays*75.20;
       price1=bdiscount-(bdiscount*0.2);
    }
   }

    if(month == "july" || month == "aug")
   {
       if(stays <= 14 )
    {
       price1=stays*76;
    }
    if(stays > 14 )
    {
       price1=stays*75.20;
    }
   }
      return price1;
}