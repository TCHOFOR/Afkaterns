
////////////////////////////////////////////////////////////
/** PROGRAM TO DETERMINE IF A GIVIN NUMBER IS PALINDROME NUMBER**/
///////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>

using namespace std;
// Function to reverse number
long Reverse( long number ) {
  //number is static so that it value remains the same through out the program
  static long  rev = 0;
  // checking if number is zero
  if ( number == 0 ) {
   return 0;
  } else {
    // repeating calculation to reversed number
   rev = rev * 10;
   rev = rev + (number % 10 );
    Reverse(number/10);// function to keep dividing number by 10 untill number equal
  }
  return rev;// returning the number that have being reveresed
}
    //Calling main  function
     int main(){
     int number = 0;
    //Prompting user for number
    cout << "Enter a number: " << endl;
    cin >> number;
    // calling function to reverse number and assigning it to a variable
    int num = Reverse(number);
     if ( number == num ) { // determining if  number is equal to  reversed code
      cout << "Palindrome Number " << endl;
     }else{
      cout << "Not Palindrome Number " << endl;
     }
     //end of  program

    return 0;
}