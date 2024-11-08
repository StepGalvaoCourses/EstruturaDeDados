#include <stdio.h>

int main(){
    for(int i=1;i<=11;i=i+1){
        if(i % 2 != 0){
            printf("%d\n",i);
        }
    }
}