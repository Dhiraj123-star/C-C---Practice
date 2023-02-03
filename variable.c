// check the data types of c

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    //a=90.5;
    //double a ; // throw error because redeclaration of variable is not allowed.
    
    const double PI=3.14;
   
    printf("The value of PI :%f",PI); 
    return 0;
}
