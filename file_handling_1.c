//file handling in c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    FILE *fptr; // file pointer 

    //use appropriate location 
    fptr= fopen("test.txt","w"); //write operation 

    if(fptr==NULL){
        printf("Error!!");
        exit(1);
    }
    printf("Enter number : ");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr); //close the file 

    return 0;
}
