// This program has a variable.
#include <iostream>
using namespace std;
 
int main()
{
   int number;

   number = 5;

   // the following statement doesn't print the value stored in number
   // Instead, it simply prints the literal "number" to the console
   cout << "The value in number is " << "number" << endl;
   return 0;
}