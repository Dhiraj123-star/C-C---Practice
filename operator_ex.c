// operator in c 

#include <stdio.h>

int main(int argc, char const *argv[])
{
     
     int a ,b ,sum, subtract, multiply, divide;

     printf("Enter your first number:\n");
     scanf("%d",&a);
     printf("Enter your second number:\n");
     scanf("%d",&b);

     sum = a+b;
     subtract=a-b;
     multiply =a*b;
     divide = a/b;

     printf("The sum is: %d\n",sum);
     printf("The subtract is: %d\n",subtract);
     printf("The multiply is: %d\n",multiply);
     printf("The divide is: %d\n",divide);
     printf("The remainder is: %d",a%b);
    
    return 0;
}
