// read the binary file 
#include<stdio.h>
#include<stdlib.h>

struct threeNum{
    int n1, n2, n3;
};

int main(int argc, char const *argv[])
{
    int n;

    struct threeNum num;
    FILE *fptr;


    if((fptr=fopen("test.bin","rb"))==NULL){
        printf("Error!! file is not opened.");

        // program exits if file pointer returns NULL
        exit(1);

    }

    for(n=1; n<5;++n){

        fread(&num,sizeof(struct threeNum),1,fptr);
        printf("n1: %d n2: %d n3: %d",num.n1,num.n2,num.n3);
        printf("\n"); // for new line
    }
    fclose(fptr); //close the file
    return 0;
}
