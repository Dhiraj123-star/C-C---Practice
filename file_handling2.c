// read from the file
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
    FILE *fptr; // file pointer
    if((fptr = fopen("test.txt","r"))==NULL){
        printf("Error!! opening File.");
        //program exits if the file pointer returns NULL value.
        exit(1);
    }
    fscanf(fptr,"%d",&num); // scan the number from the file.

    printf("value of n=%d",num);
    fclose(fptr); // close the file

    return 0;
}
