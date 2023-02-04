// enum is a data type that consists of integral constants.
#include<stdio.h>

enum suit{
    club=0,
    diamonds =10,
    hearts =20,
    spades =3

}card;

int main(int argc, char const *argv[])
{
    card= diamonds;
    printf("Size of enum variable : %d bytes",sizeof(card)); // returns 4 bytes because it's integer

    return 0;
}
