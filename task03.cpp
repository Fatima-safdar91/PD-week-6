   `#include<iostream>
using namespace std;
string getZsign(int date, string month);

main()
{ int date;
   string month;
   string result;
   cout << "enter date=";
   cin >> date;
   cout << "enter month=";
   cin >> month;
   result=getZsign(date, month);
   cout << result;
 
}
string getZsign(int date, string month)
{   string sign;
 if((date >=21 && month == "dec") || (date <= 19 && month == "april"))
 {
    sign= "Aries";
 }
if((date >=20 && month == "april") || (date <= 20 && month == "may"))
 {
    sign= "Taurus";
 }
 if((date >=21 && month == "may") || (date <= 20 && month == "june"))
 {
    sign= "Gemini";
 }
 if((date >=21 && month == "june") || (date <= 22 && month == "july"))
 {
    sign= "Cancer";
 }
 if((date >=23 && month == "july") || (date <= 22 && month == "August"))
 {
    sign= "Leo";
 }
 if((date >=23 && month == "August") || (date <= 22 && month == "sep"))
 {
    sign= "virgo";
 }
 if((date >=23 && month == "sep") || (date <= 22 && month == "oct"))
 {
    sign= "libra";
 }
 if((date >=23 && month == "oct") || (date <= 21 && month == "nov"))
 {
    sign= "scorpio";
 }
 if((date >=22 && month == "nov") || (date <= 21 && month == "dec"))
 {
    sign= "sagittarius";
 }
 if((date >=22 && month == "dec") || (date <= 19 && month == "jan"))
 {
    sign= "capricon";
 }
 if((date >=20 && month == "jan") || (date <= 18 && month == "feb"))
 {
    sign= "Aquarius";
 }
 if((date >=19 && month == "feb") || (date <= 20 && month == "march"))
 {
    sign= "pisces";
 }
     return sign;
}