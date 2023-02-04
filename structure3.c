// nested structure in c
#include<stdio.h>

struct complex{
    int img;
    float real;

};
// nested structure.
struct number{
    struct complex comp;
    int integer;
}num1;

int main(int argc, char const *argv[])
{
    // initialize the complex variables
    num1.comp.img=11;
    num1.comp.real=9.45;

    // initialise the number variable
    num1.integer=5;

    // print struct variables
    printf("Imaginary Part: %d\n",num1.comp.img);
    printf("Real Part: %f\n",num1.comp.real);
    printf("Integer: %d\n",num1.integer);
    
    return 0;
}
