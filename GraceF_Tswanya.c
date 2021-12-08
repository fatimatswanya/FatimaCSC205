#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *onlineFraud(void * id_1)
{
long *id_OF =(long * ) id_1;
printf("Online Fraud, %ld \n", *id_OF);
}

void *chargeback(void * id_2)
{
long *id_CB =(long * ) id_2;
printf("Chargeback, %ld \n", *id_CB);
}

void *payGateChallenges(void * id_3)
{
long *id_PGC =(long * ) id_3;
printf("Payment Gateway Challenges, %ld \n", *id_PGC);
}
void *contUpdate(void * id_4)
{
long *id_CU =(long * ) id_4;
printf("Continuous Updates, %ld \n", *id_CU);
}

void *UEchallenges(void * id_5)
{
long *id_UEC =(long * ) id_5;
printf("User Experience Challenges, %ld \n", *id_UEC);
}

void *MCpayment(void * id_6)
{
long *id_MCP =(long * ) id_6;
printf("Multi-currency Payment, %ld \n", *id_MCP);
}

int main()
{
int opcounter, numop, multiple=0, x=0, operations;
pthread_t id_1;
pthread_t id_2;
pthread_t id_3;
pthread_t id_4;
pthread_t id_5;
pthread_t id_6;

printf("Enter the number of operations you want: \n");
scanf ("%d", &numop);
printf("Press \n 1 for Online Fraud \n 2 for Chargeback \n 3 for Payment Gateway Challenges \n 4 for Continuous Updates \n 5 for User Expereience Challenges \n 6 for Multi-Currency Payment \n");
scanf("%d",&operations);





for (opcounter=0;opcounter<numop;opcounter++);

{
 switch(operations)
 {
  case 1:
  for (multiple =0; multiple < x + 2; multiple++)
  pthread_create(&id_1, NULL, onlineFraud, (void *) &id_1);
  pthread_join(id_1, NULL);
  pthread_exit(NULL);
  return 0;
  
  case 2:
  for (multiple =0; multiple < x + 2; multiple++)
  pthread_create(&id_2, NULL, chargeback, (void *) &id_2);
  pthread_join(id_2, NULL);
  pthread_exit(NULL);
  return 0;

  case 3:
  for (multiple =0; multiple < x + 2; multiple++)
  pthread_create(&id_3, NULL, payGateChallenges, (void *) &id_3);
  pthread_join(id_3, NULL);
  pthread_exit(NULL);
  return 0;  
  
  case 4:
  for (multiple =0; multiple < x + 2; multiple++)
  pthread_create(&id_4, NULL, contUpdate, (void *) &id_4);
  pthread_join(id_4, NULL);
  pthread_exit(NULL);
  return 0;  
  
  case 5:
  for (multiple =0; multiple < x + 2; multiple++)
  pthread_create(&id_5, NULL, UEchallenges, (void *) &id_5);
  pthread_join(id_5, NULL);
  pthread_exit(NULL);
  return 0;  
  
  case 6:
  for (multiple =0; multiple < x + 2; multiple++)
  pthread_create(&id_6, NULL, MCpayment, (void *) &id_6);
  pthread_join(id_6, NULL);
  pthread_exit(NULL);
  return 0;  
  
  break;
  
  default:
  printf("Invalid choice /n");
  

 }

}
 return 0;
}


