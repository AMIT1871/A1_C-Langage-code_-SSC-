
//*********************** print ASCII table *******************************************
#include<stdio.h>
int main(){
int i=0;
while(i<=255){
    printf("%d = --> %c ",i,i);
    i++;
}
}