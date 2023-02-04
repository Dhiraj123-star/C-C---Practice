//  c program to read name and marks of n numbers 
// of students and store them in a file
# include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char name[10]; 
    int marks, i,num;

    printf("Enter number of students: ");
    scanf("%d",&num); 
    FILE *fptr; //file pointer 

    fptr= fopen("students_details.txt","w"); // write operation
    if(fptr==NULL){
        printf("Error!!");
        exit(1);
    }
    for (i=0; i<num; i++){
        printf("For student %d\n Enter name: ",i+1);
        scanf("%s",name);
        printf("Enter marks: ");
        scanf("%d",&marks);

        fprintf(fptr,"\nName: %s \nMarks:%d\n",name,marks);
    }
    fclose(fptr);  //close the file
    
    return 0;
}
