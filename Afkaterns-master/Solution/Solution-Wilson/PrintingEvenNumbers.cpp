#include <iostream>
///////////////////////////////////////////////
/* Propram to Print Even Numbers from 1000 to 3000 (included) */ 
//////////////////////////////////////////////
/**
** PrintingEvenNumbers.cpp
**/

using namespace std;
//Calling the  Main Function
int main(int argc, char const *argv[]){

cout << "Even Numbers From 1000 to 3000 Are:"<<endl;	
//Loop to print numbers from 1000 to 3000 (included)
for ( int i = 1000; i <= 3000; i++ ) {
 //Determining if Number is Even or Odd
 // if Number ( i ) mod two is Equal to Zero , then number is Even else number is odd
 if ( i % 2 == 0 ) {
 //Printing The Even Numbers
 cout << i << ",";
 }//end of if
}//End of for Loop
cout<<endl; //sending console to the next line

	return 0;
}