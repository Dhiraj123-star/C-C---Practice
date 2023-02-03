//assignment operator in c

#include<stdio.h>
int main(int argc, char const *argv[])
{ 
    int a =10, c;
    c=a;

    printf("The value of c is:%d\n",c);
    c+=a;
    printf("The value of c is: %d\n",c);
    c-=a;
    printf("The value of c is: %d\n",c);
    c*=a;
    printf("The value of c is: %d\n",c);
    c/=a;
    printf("The value of c is: %d\n",c);
    c%=a;
    printf("The value of c is: %d\n ",c);
    
    return 0;
}
