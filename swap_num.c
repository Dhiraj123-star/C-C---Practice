// swapping the number in c

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a , b, temp;

    printf("Enter your first number: ");
    scanf("%d",&a);

    printf("Enter your second number: ");
    scanf("%d",&b);

    // assign the first value to temp

    temp = a;

    // assign the second value to a

    a=b;

    // assign temp value to b
    b= temp;

    printf("Value of a and b after swapping: %d , %d",a ,b);

    return 0;
}
