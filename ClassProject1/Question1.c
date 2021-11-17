// Voting eligibility
#include <stdio.h>
int main ()
{
 int userAge;
 printf("How old are you");
 scanf("%d", &userAge);
 
 if (userAge >= 18)
 {printf("You are eligible to vote");}
 
 else 
 {printf("You are not eligible to vote");}
 
 return 0;
}
