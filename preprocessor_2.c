// using define preprocessor
// macros that work in a similar way as a function call.
// this is known as function-like macros.

#include<stdio.h>
# define PI 3.1415
# define circleArea(r) (PI *r*r)

int main(int argc, char const *argv[])
{
    float radius,area; 
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area= circleArea(radius);
    printf("Area=%.2f",area);
    
    return 0;
}
