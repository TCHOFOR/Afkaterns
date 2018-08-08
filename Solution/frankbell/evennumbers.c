#include <stdio.h>

int main()
{
int i = 1000;//initialise the counter
int n = 3000;//initialise the range of numbers
/* read numbes from 1000 to 3000*/
printf("print all even numbers till:3000\t ");
scanf("%d",&n);
printf("even numbers from 1000 to %d are:\t", n);
/*print even numbers*/
for(i=1000; i<=3000; i++)
{
if(i%2==0){
printf("%d,",i);

}
}
return 0;
}



