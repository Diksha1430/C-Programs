//WAP to check whether a number is palindrome
#include <stdio.h>
int main()
{
int n,num,digit,rev=0;
printf("Enter a number: ");
scanf("%d",&num);

n=num;

do
{
digit=num%10;
rev=(rev*10)+digit;
num=num/10;
} 
while(num!=0);
printf("\nThe reverse of the number is : ");
scanf("%d",&rev);

     if(n==rev)
         printf("\nThe number is a palindrome ");
     else
         printf("\nThe number is not palindrome ");
    return 0;
}
