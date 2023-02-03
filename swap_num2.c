// swapping number without temporary variable 

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    //input the first number 
    printf("Enter your first number:\n ");
    scanf("%d",&a);
    //input the second number 
    printf("Enter your second number:\n");
    scanf("%d",&b);

    a= a-b;

    b= a+b;

    a= b-a;

    printf("After Swapping the value of a and b is : %d %d",a,b);

    return 0;
}
