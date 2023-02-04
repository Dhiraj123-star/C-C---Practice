// structure in c through typedef
// typedef create an alias name for data types
// it is commonly used with structures to simplify 
// the syntax of declaring variables.
# include<stdio.h>
#include<string.h>

//struct with typedef person

typedef struct Person{
    char name[50];
    int cityNo;
    float salary;

}person;

int main(int argc, char const *argv[])
{
    person p1; // alias name of structure using typedef 
    // assign the value to name of p1
    strcpy(p1.name,"Dhiraj Kumar");

    // assign values to other p1 variables
    p1.cityNo= 912;
    p1.salary=90000;

    // print struct variables

    printf("Name: %s\n",p1.name);
    printf("Citizenship no: %d\n",p1.cityNo);
    printf("Salary: %.2f",p1.salary);

    return 0;
}
