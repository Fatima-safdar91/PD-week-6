#include<iostream>
using namespace std;
string grade(string name, float marks1, float marks2, float marks3, float marks4, float marks5 );
int total(float marks1, float marks2, float marks3, float marks4, float marks5);
int per(float marks1, float marks2, float marks3, float marks4, float marks5);

main()
{
    string name;
    float totalmarks;
    float percentage;
    float marks1;
    float marks2 ;
    float marks3;
    float marks4;
    float marks5;
    string result;
     float result1;
    float result2;
    cout << "enter your name:";
    cin >> name;
    cout<< "enter english marks:";
    cin >> marks1;
     cout<< "enter math marks:";
    cin >> marks2;
     cout<< "enter chemistry marks:";
    cin >> marks3;
     cout<< "enter social science marks:";
    cin >> marks4;
     cout<< "enter biology marks:";
    cin >> marks5;
   
    result1= total(  marks1,  marks2,  marks3,  marks4,  marks5);
    cout << "total marks=" << result1 << endl;
    result2=per(marks1,  marks2,  marks3,  marks4,  marks5);
    cout << "percentage=" << result2 << endl;
    result=grade( name,  marks1,  marks2,  marks3,  marks4,  marks5  );
    cout <<"Grade=" << result;
}
string grade(string name, float marks1, float marks2, float marks3, float marks4, float marks5  )
{
 
 float percentage;
 string output;
 float totalmarks;
 totalmarks=marks1+marks2+marks3+marks4+marks5;
 percentage=(totalmarks*100)/500;

    if(percentage >=90 && percentage <= 100)
    {
        output = "A+";
    }
    if(percentage >=80 && percentage <= 90)
    {
        output = "A";
    }
     if(percentage >=70 && percentage <= 80)
    {
        output = "B+";
    }
     if(percentage >=60 && percentage <= 70)
    {
        output = "B";
    } 
    if(percentage >=50 && percentage <= 60)
    {
        output = "C";
    } 
    if(percentage >=40 && percentage <= 50)
    {
        output = "D";
    }
     if(percentage <= 40)
    {
        output = "F";
    } 
    return output;
}
int total( float marks1, float marks2, float marks3, float marks4, float marks5)
{
   float totalmarks;
totalmarks=marks1+marks2+marks3+marks4+marks5;
return totalmarks;
}
int per(float marks1, float marks2, float marks3, float marks4, float marks5)
{
    float percentage;
    float totalmarks;
  totalmarks=marks1+marks2+marks3+marks4+marks5; 
  percentage=(totalmarks*100)/500; 
  return percentage;
}