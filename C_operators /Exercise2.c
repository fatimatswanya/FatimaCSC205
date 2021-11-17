//working of increment and decrement operators
#include <stdio.h>
int main ()
{
  int first_int, second_int;
  float first_float, second_float;
  
  printf("Enter the first integer value: ");
  scanf("%d", &first_int);
  
  printf("Enter the second integer value: ");
  scanf("%d", &second_int);
  
  printf("Enter the first float value: ");
  scanf("%f", &first_float);
  
  printf("Enter the second float value: ");
  scanf("%f", &second_float);
  
  printf("++first_integer = %d \n", ++first_int);
  printf("--second_integer = %d \n", --second_int);
  printf("++first_float = %f \n", ++first_float);
  printf("--second_float = %f \n", --second_float);
  
  return 0;
}


