// preprocessor in c is a macro preprocessor that transforms your 
// program before it is complied.
#include<stdio.h>
#define PI 3.1415

int main(int argc, char const *argv[])
{
    float radius,area; 
    printf("Enter the radius: ");
    scanf("%f",&radius);

    // NOTICE , the use of PI 
    area = PI*radius*radius; 

    printf("The area is: %.2f",area);
    
    return 0;
}
