#include <iostream>

using namespace std;

float addition(float num1 , float num2)

{

    return num1 + num2;

}


float subtraction(float num1 , float num2)

{

    return num1 - num2;

}


float multiplication(float num1 , float num2)

{

 
 return num1 * num2;

}

float divide(float num1 , float num2)

{

    return num1 / num2;

}

int main(){

float num1;

float num2;

char task;


cout << "ENTER THE FIRST NUMBER: ";

cin >> num1;

cout << "Enter THE SECOND NUMBER: ";

cin >> num2;

cout << "SELECT AN OPERATION (+,-,*,/)" << endl;

cout << "+ ADDITION " << endl;

cout << "- SUBTRACTION " << endl;

cout << "* MULTIPLICATION " << endl;

cout << "/ DIVISON " << endl;

cin >> task;

float Result;

switch (task)

   {

   case

'+':

    Result = addition(num1 , num2);
    break;
   case

'-':
    Result = subtraction(num1 , num2);
    break;
   case

'*':
    Result = multiplication(num1 , num2);
    break;
   case

'/':
    Result = divide(num1 , num2);
    break;
   default:
     cout<< "SYNTAX ERROR" << endl;
     return 1;
   } 

cout << num1 << " " << task << " " << num2 << " = " << Result << endl;
return 0;

}