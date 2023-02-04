// get current time using __TIME__
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Current time: %s\n",__TIME__);
    printf("Current Date: %s\n",__DATE__);
    printf("Current File: %s\n",__FILE__);
    printf("Current Line number: %d\n",__LINE__);
    return 0;
}
