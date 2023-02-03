// sizeof operator in c
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ;
    float b;
    double c;
    char d;

    printf("The size of int: %d\n",sizeof(a));
    printf("The size of float: %d\n",sizeof(b));
    printf("The size of double is: %d\n",sizeof(c));
    printf("The size of character is: %d",sizeof(d));
    
    return 0;
}

