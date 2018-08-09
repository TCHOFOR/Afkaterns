
//////////////////////////////////////////////////////////
/** PROGRAM TO PRINT PASCAL TRIANGLE **/
////////////////////////////////////////////////////////
/****
*** PascalTriangle.cpp
****/
#include <iostream>

using namespace std;

int main(){
 int num = 0;           //Number declaration

    //Prompting user for number
    cout << "Enter a Number : ";
    cin >> num;
    // push numbers to rigth
    cout << " \n ";

    for ( int i = 0; i < num; i++ ) {

    int n = 1; // Number to be printed declaration

    for ( int k = 1; k < ( num -1 ); k++ ) {

    cout << "      " ; // Printing Spaces between numbers

     }

    for ( int j = 0; j <= i;  j++ ){

    cout << "     " << n ; // printing a Space before Number

    n = n * ( i - j)/(j + 1); // calculating number to be printed

       }
       //Moving to the next level of numbers to be printed

      cout << " \n " << " \n ";

    }
    // End of program
    return 0;
}
