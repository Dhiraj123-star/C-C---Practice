// structure in c 
// it is collection of variables(can be of different types)
#include<stdio.h>
#include<string.h>
// create struct with person 
struct Person{
    char name[50];
    int cityno;
    float salary;

}person;
int main(int argc, char const *argv[])
{
    //assign value to name of person1
    strcpy(person.name,"George Orwell");

    //assign values to other person variables
    person.cityno=901;
    person.salary=900087.5; 

    // print struct variables
    printf("Name: %s\n",person.name);
    printf("Citizenship No: %d\n",person.cityno);
    printf("Salary: %.2f\n",person.salary);

    return 0;
}
