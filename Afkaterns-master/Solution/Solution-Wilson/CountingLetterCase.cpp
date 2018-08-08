/////////////////////////////
/* This Program count the Number of Lower and Upper case Letters in a Sentence*/

/*
** CountingLetterCase.cpp
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctype.h>
/*
 HINT:
 INBUILD FUNCTIONS:
 1. isalpha function check if a letter is alphanuumeric
 2. isupper function check if a letter is in Upper case
*/

using namespace std;
//Function to Count Upper and Lower case Letter in a Sentence
void CountCase( char statement[],int size ) {
	//Counter  to count lower and upper case Letters
	 int upper = 0, lower = 0; 
	 //Countwer for while loop
	 int i = 0;
	 while ( statement[i] != '\0') { // Checking to see if counter is in end of Sentence
	 	if ( isalpha(statement[i])) { // Checking to see if letter is alphanumeric
	 	if ( isupper(statement[i])){ // checking to see if letter in sentence is in Uppercase
	 		upper++; //incrementing upper uppercase if letter is in Uppercase
	 	} else {
             lower++; // incrementing lower if letter is in Lowercase
	 	}
	 }
	 	i++; //incrementing counter in sentence
	 }
	 //Displaying Number of Upper and Lower Case letters
	cout << "UPPER CASE : " << upper << endl;
	cout << "LOWER CASE : " << lower << endl; 
}

int main () {
	//String input Declaration
	char statement[100];
	//Prompting  user for statement input
	cout << "Enter statement: ";
	cin.getline(statement,100);
	//Calling Function to calculate lower and upper case  letters in sentence
	CountCase(statement,100);
	return 0;
}