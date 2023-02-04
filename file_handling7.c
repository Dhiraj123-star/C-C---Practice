// c program to write all the members of an array of structures
// to a file using fwrite(). 
// read the array from the file and display on the screen.
#include<stdio.h>
#include<stdlib.h>
struct Student{
    char name[50]; 
    int height;
} ; 

int main(int argc, char const *argv[])
{
    struct Student stud1[5],stud2[5]; // arrays of structure
    FILE *fptr; // file pointer 
    int i;
    fptr= fopen("file.txt","wb"); 
    for (i=0; i<5; i++){
        fflush(stdin);
        printf("Enter name: ");
        gets(stud1[i].name);
        printf("Enter height: ");
        scanf("%d",&stud1[i].height);
    }
    fwrite(stud1,sizeof(stud1),1,fptr); 
    fclose(fptr); // close the file 

    fptr= fopen("file.txt","rb"); 
    fread(stud2,sizeof(stud2),1,fptr);
    for(i=0;i<5; ++i){
        printf("Name: %s\nHeight: %d",stud2[i].name,stud2[i].height);
        printf("\n");//for new line
    }
    fclose(fptr); //close the file
    return 0;
}
