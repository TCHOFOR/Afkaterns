/////////////////////////////////////////////////////////////////
/** PROGRAM TO COUNT THE NUMBER OF LOWER AND UPPER CASE LETTERS IN A SENTENCE **/
////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include  <cstdlib>
#include <ctype.h>

using namespace std;
//fUNCTION DECLARATION
void CountingCase ( string statement, int size) {
int upper = 0;//upper case counter
int lower = 0;//lower case counter
int x = 0;
   while ( statement[x] != '\0') {
     for ( char i = 'a',j = 'A'; i <= 'z',j <= 'Z'; j++, i++){
     if (statement[x] == i) {
      lower ++; //incrementing lower case counter
     }else
     if ( statement[x] == j ) {
      upper++; // incrementing upper case counter
     }

     }
      x++;
       }
       //printing result
     cout << "LOWER CASE : " << lower <<endl;
     cout << "UPPER CASE : " << upper << endl;
}

int main(){
//Statement declaration
string statement;
//prompting user for Statement
cout << "Enter a statement: " ;
getline(cin,statement);
//Calling of function
CountingCase(statement,100);
    return 0;
}
