/******************************************************************************

RECURSIVE AND NON RECURSIVE function
HERE WE ARE TAKING 5 DIGIT NUMBER AND FINF ITS SUM BY USING RECURSIVE AND NON RECURSIVE FUNCTION.


*******************************************************************************/
#include <stdio.h>
int recu(int);
int wrecu(int);
int main()
{
    int a,b,c=0,e;
    while(1)
    {c=0;
    printf("please enter 5 digit number:");
    scanf("%d",&a);
    b=a;
       while(a)   /*this loop used to find the number of digit passed to thr input buffer*/
    {a=a/10;
    c++;
    }
    if(c==5)
    {   break;
    }
    }
    e=recu(b);
    printf("\nsum of entered value with Recursive function is: %d",e);
    e=wrecu(b);
    printf("\nsum of entered value without Recursive function is:%d ",e);
    return 0;
}
int recu( int num) 
{
int sum = 0 ;
int rem;
if (num != 0 )
{
rem = num% 10 ; /* Calculate remainder */
sum = rem + recu( num/ 10 ) ; /* Recursive call */
}
return sum ;
}
int wrecu( int n ) /* Function without recursion */
{
int rem, sum = 0 ;
while(n>0)
{
rem= n % 10 ; 
sum = sum + rem ; 
n = n/ 10 ; 
}
return ( sum ) ;
}
