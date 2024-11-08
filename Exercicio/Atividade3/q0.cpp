#include <stdio.h>

int sucessor(int n){
    int r = n+1;
    return r;
}

int main(){
    int num;
    scanf("%d",&num);
    int a = sucessor(10);
    printf("%d \n",a);
}