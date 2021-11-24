#include <stdio.h>
#include <stdlib.h>
#include <unisted.h>
#include <pthread.h>

void *onlineFraud(void * id_1)
{
long id_1 =(long * ) id_1;
}
printf("Online Fraud, %ld \n", *id_1);

void *chargeback(void * id_2)
{
long id_2 =(long * ) id_2;
}
printf("Chargeback, %ld \n", *id_2);

void *payGateChallenges(void * id_3)
{
long id_3 =(long * ) id_3;
}
printf("Payment Gateway Challenges, %ld \n", *id_3);

void *contUpdate(void * id_4)
{
long id_4 =(long * ) id_4;
}
printf("Continuous Updates, %ld \n", *id_4);

void *UEchallenges(void * id_5)
{
long id_5 =(long * ) id_5;
}
printf("User Experience Challenges, %ld \n", *id_5);

void *MCpayment(void * id_6)
{
long id_6 =(long * ) id_6;
}
printf("Multi-currency Payment, %ld \n", *id_6);
