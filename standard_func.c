// we use standard function to calculate
// square root of the number
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float num, root ;
    printf("Enter your number:");
    scanf("%f",&num);

    // computes the square root of num and stores in root.
    root = sqrt(num);
    printf("The square root:%.2f",root);


    
    return 0;
}
