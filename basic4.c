//4. WAP to convert Fahrenheit temp in degree Celsius.
#include<stdio.h>
int main()
{
float f,c;
printf("enter tempeture in fahrenheit:");
scanf("%f",&f);

c=0.55*(f-32);
printf("\n\ndegreecelsius=%f",c);

return 0;
}
