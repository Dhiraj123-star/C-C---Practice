// structure and pointers in c
#include<stdio.h>
struct Person{
    int age;
    float weight;
};
int main(int argc, char const *argv[])
{
    struct Person *personptr, person1; // here we create structure pointer
    personptr = &person1;  // store the address of person1 to personptr 

    printf("Enter age: ");
    scanf("%d",&personptr->age); 

    printf("Enter weight: ");
    scanf("%f",&personptr->weight); 

    printf("Displaying Details:\n");
    printf("Age:%d\t",personptr->age);
    printf("weight:%f\t",personptr->weight);



    
    return 0;
}
