#include <stdio.h>
#include <stdlib.h>



#define FAILURE 1
#define SUCCESS 0


int main(int argc,char *argv[])
{
    unsigned int num;
    unsigned int cnt;
    unsigned int change;


    if(argc!=1){
        printf("Wrong parameters.\n");
        return(FAILURE);
    }

    scanf("%d",&num);

    if(num<1 || num>1000000000){
        printf("Wrong parameters.\n");
        return(FAILURE);
    }

    cnt=0;
    while(num!=0){
        change=num%2;
        cnt=cnt*2;
        cnt+=change;

        num-=change;
        num=num/2;
    }

    //printf("Reverse is: %d \n",cnt);
    printf("%d",cnt);

return(SUCCESS);
}





