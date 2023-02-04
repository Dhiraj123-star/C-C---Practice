// dynamic memory allocation of structs
#include<stdio.h>
#include<stdlib.h>
struct Person{
    int age; 
    char name[50];
}; 

int main(int argc, char const *argv[])
{
    struct Person *ptr; // create structure pointer 
    int i,n;
    printf("Enter the number of person: ");
    scanf("%d",&n);

    // allocating memory for n numbers of struct Person 
    ptr= (struct Person*) malloc(n*sizeof(struct Person));

    for (i=0; i<n; i++){
        printf("Enter first name and age respectively: ");

        // to access members of 1st struct person, 
        // ptr->name and ptr->age is used

        // to access members of 2nd struct person
        // (ptr+1)->name and (ptr+1)->age is used

        scanf("%s %d",&(ptr+i)->name,&(ptr+i)->age);
    }

    printf("Displaying Information: \n");
    for(i=0; i<n;i++){

        printf("Name: %s\tAge: %d\n",(ptr+i)->name,(ptr+i)->age);
    }
    return 0;
}
