//logical operator in c

#include<stdio.h>
int main(int argc, char const *argv[])
{
     int a =10, b=9,c=6;

     printf("a>b && b>c %d\n",a>b && b>c);
     printf("a>b || b<c %d\n",a>b ||b<c);
     printf("!(a<b) %d\n",!(a<b));
    
    return 0;
}
