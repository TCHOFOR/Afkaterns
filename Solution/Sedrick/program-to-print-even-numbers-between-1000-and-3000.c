#include<stdio.h>
/* program to print all numbers from 1000 to 3000 and indicate if even or odd*/
int main()
{
   int max = 3000, i;
   for(i=1000;i<=max;i++)
   {
    if(i % 2 == 0)
    {
     printf("%d, \t",i);
    }
     
   }

        return 0;
}


