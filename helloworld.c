#include <stdio.h>

int main(int argc,char* argv[]){
    int sum=0;
    for(int a=1;a<=10;a++)
        sum=sum+a;
    printf("Sigma1-100 sum %d",sum);
    return 0;
}
