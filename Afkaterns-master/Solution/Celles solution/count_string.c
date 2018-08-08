								/*this Program displays number of  Upper and Lowercase letters of any sentence entered*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char sentence[100];
	int i = 0;
	int uppercounter = 0;
	int lowercounter = 0;

	printf("Enter the sentence: \n");
	 scanf("%s",sentence);

												//gets(sentence); // tried this and it wasnt recognised by the complier.
	 printf("You entered: %s\n",sentence);
	
												/* This code  runs but only counts the first word. and any word after an empty space is not counted . */

		while ( sentence[i] != '\0') 			/*A wide space is not recognised by the c complier the way it is suppoed to . the null value is used*/
		{
			if (sentence[i] >= 'A' && sentence[i] <= 'Z')
			{
				uppercounter++;
			}
			if (sentence[i] >= 'a' && sentence[i] <= 'z')
			{
				lowercounter++;
			}
			i++;
		}
	printf("UPPERCASE = %d\n",uppercounter);
	printf("lowercase = %d\n",lowercounter );
	

	return 0;
}