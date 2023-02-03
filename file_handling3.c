// file handling in binary format
#include<stdio.h>
#include<stdlib.h>
struct threeNum {
    int n1, n2, n3;
};

int main(int argc, char const *argv[])
{
    int n;

    struct threeNum num;
    FILE *fptr; // file pointer 

    if((fptr=fopen("test.bin","wb"))==NULL){ // binary format file
    printf("Error!! opening file.");

    // program exits if the file pointer returns NULL
    exit(1);
    }
    for (n=1;n<5; n++){
        num.n1=n;
        num.n2= 5*n;
        num.n3= 5*n+1; 
        fwrite(&num, sizeof(struct threeNum),1,fptr);
       
    }

    fclose(fptr); //close the file.

    return 0;
}
