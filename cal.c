#include<stdio.h>
float si(float,float,float);
float ci(float,float,float,int);
int main()
{
    char option;
    int n;
    float p,r,t;
    printf("Please choose between these two options:\nA. Simple Interest\nB. Compound interest\n");
    scanf("%c",&option);
    printf("You chose %c\n",option);
    switch(option)
    {
    case 'a':
    case 'A':
        printf("Please enter the Principal: ");
        scanf("%f",&p);
        printf("Please enter the Rate in Percentage form: ");
        scanf("%f", &r);
        printf("Please enter the Time in years: ");
        scanf("%f",&t);
        printf("Simple Interest: %.3f",si(p,r,t));
        break;
    case 'b':
    case 'B':
        printf("Please enter the Principal: ");
        scanf("%f",&p);
        printf("Please enter the Rate in Percentage form: ");
        scanf("%f", &r);
        printf("Please enter the Time in years: ");
        scanf("%f",&t);
        printf("Please enter the number of times compound per year: ");
        scanf("%d",&n);
        printf("Compound Interest: %.3f",ci(p,r,t,n));
        break ;
    default:
        printf("You entered the wrong option please try again.");
        break;
    }
}
float si(float x, float y, float z)
    {
        float amount;
        amount=(x*y*z)/100;
        return amount;
    }
float ci(float x, float y, float z, int u)
{

    float amount;
    amount=x*pow((1+y/(100*u)),u*z);
    return amount;
}
