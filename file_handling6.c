// c program to read name and marks of n number of students from 
// and stores them in a file.
// if the file previously exits , add the information
// of a file
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char name[50];
    int marks,i,num;
    printf("Enter number of students: ");
    scanf("%d",&num);

    FILE *fptr; // file pointer
    fptr = fopen("students_details.txt","a"); //here append operation
    if(fptr==NULL){
        printf("Error!!");
        exit(1); 
    }
    for(i=1; i<=num; ++i){
        printf("For student%d\nEnter name: ",i);
        scanf("%s",&name);

        printf("Enter marks: ");
        scanf("%d",&marks);

        fprintf(fptr,"\nName: %s\nMarks:%d\n",name,marks);


    }
    fclose(fptr); //close the file
 
    
    return 0;
}
