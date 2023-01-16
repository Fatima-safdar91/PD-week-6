#include<iostream>
using namespace std;
void printvalue(string temperature, string humidity);

main()
{
    string temperature;
    string humidity;
    cout << "temperature can be either cold or warm:";
    cin >> temperature; 
   cout << "humidity can be either dry or humid:";
    cin >> humidity; 
    printvalue(temperature,  humidity);
    
}
void printvalue(string temperature, string humidity)
{ 
    if( temperature == "warm" && humidity == "dry")
    {
        cout << "play tennis";
       
 
    }
      if( temperature == "warm" && humidity == "humid")
    {
        cout << "swim";
 
    }
        if( temperature == "cold" && humidity == "dry")
    {
        cout << "play basketball";
 
    }
        if( temperature == "cold" && humidity == "humid")
    {
        cout << "play tennis";
 
    }  
     
}
