#include<iostream>
using namespace std;
float calculateprice(string fruit, string day, int quantity);

main()
{
    string fruit;
    string day;
    int quantity;
    float totalprice;

    cout << "enter fruit name(banana,apple,orange,grapefruit,kiwi,pineapple,grapes) = ";
    cin >> fruit;
    cout << "enter day =";
    cin >> day;
    cout << "enter quantity of fruits=";
    cin >> quantity;

     totalprice = calculateprice( fruit,  day,  quantity);


     if(fruit=="banana" || fruit=="apple" || fruit=="orange" || fruit=="grapefruit" || fruit=="kiwi" || fruit=="pineapple" || fruit=="grapes")
      {
          cout << totalprice;
      }
      else
      {
           cout << "error";
      }


}

float calculateprice(string fruit, string day, int quantity)
{ 
    float price;

  if ( day=="mon" || day=="tues" || day=="wed" || day=="thurs" || day=="fri")
    {
      if(fruit=="banana")
      {
        price=quantity*2.50;
      }
      if(fruit=="apple")
      {
        price=quantity*1.20;
      }
      if(fruit=="orange")
      {
        price=quantity*0.85;
      }
      if(fruit=="grapefruit")
      {
        price=quantity*1.45;
      }
      if(fruit=="kiwi")
      {
        price=quantity*2.70;
      }
      if(fruit=="pineapple")
      {
        price=quantity*5.50;
      }
      if(fruit=="grapes")
      {
        price=quantity*3.85;
      }

    }

  else if(day=="sat" ||  day=="sun" )
   {
      if(fruit=="banana")
      {
        price=quantity*2.70;
      }
      if(fruit=="apple")
      {
        price=quantity*1.25;
      }
      if(fruit=="orange")
      {
        price=quantity*0.90;
      }
      if(fruit=="grapefruit")
      {
        price=quantity*1.60;
      }
      if(fruit=="kiwi")
      {
        price=quantity*3.00;
      }
      if(fruit=="pineapple")
      {
        price=quantity*5.60;
      }
      if(fruit=="grapes")
      {
        price=quantity*4.20;
      }

    }
      return price;

}