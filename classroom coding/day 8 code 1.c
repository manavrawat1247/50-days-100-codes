#include<stdio.h>
int main()
{
char str;
printf("Enter a charcter or number or special character:");
scanf("%c",&str);
if(str>='A'&&str<='Z')
printf("Input is a uppercase character");
else if(str>='a'&&str<='z')
printf("Input is a lowercase character");
else if(str>='1'&&str<='9')
printf("Input is a number");
else
printf("Input is a special symbol");
}