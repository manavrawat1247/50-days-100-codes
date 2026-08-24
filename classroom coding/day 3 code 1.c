#include<stdio.h>
int main()
{ 
float temp,far;
printf("Enter Temperature in degree celsisus:");
scanf("%f",&temp);
far=(temp*1.8)+32;
printf("Temperature in fahrenheit:%2f\n",far);
}