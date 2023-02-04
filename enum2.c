// how to use enums for flags?
#include<stdio.h>
enum designFlags{
    BOLD =1,
    ITALICS=2,
    UNDERLINE=4
}; 

int main(int argc, char const *argv[])
{
    int mydesign = BOLD&UNDERLINE;
    // 00000001 (1)
    // 00000100(4)
    // _*_(multiply)______
    // 00000000 (0)

    int des = ITALICS|UNDERLINE; 

    // 00000010(2)
    // 00000100(4)
    // __+_(Add)___
    //   00000101 (6)
    
    printf("%d\n",mydesign);
    printf("%d",des);
    return 0;
}

