#include <stdio.h>

int main()
{
 printf("Welcome to Tee's Tasty Hut \n");
 printf("We sell Rice and Stew, Iced water, Jam Doughnuts, Pigs in Blankets and Tuwo Shinkafa \n");
 int quantity,price,total;
 printf("Enter the quantity of your food of choice\n");
 scanf("%d",&quantity);
 printf("Press \n 1 for Rice and Stew \t N1500 \n 2 for Iced Water \t N5000 \n 3 for Jam Doughnut \t N250 \n 4 for Pigs in a Blanket \t N300 \n 5 for Tuwo Shinkafa \t N15000\n ");
scanf("%d", &price);

 
switch (price)
{
case 1:
printf("Your total Rice and stew is \t");
total = 1500 * quantity;
break;

case 2:
printf("Your total Iced water is \t");
total = 5000 * quantity;
break;

case 3:
printf("Your total Jam doughnuts are \t");3
total= 250 * quantity;
break;

case 4:
printf("Your total Pigs in a blanket are \t");
total= 300 * quantity;
break;

case 5:
printf("Your total Tuwo Shinkafa is \t" );
total= 15000 * quantity;
break;

default:
printf("Sorry we don't have that food \n");
}
printf("%d", total);
return 0; 
}
