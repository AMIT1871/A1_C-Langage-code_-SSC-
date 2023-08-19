//print Fibonacci series

#include<stdio.h>
int main(){
int n,a=0,b=1,c;
printf("emter n th place\n");
scanf("%d",&n);
printf("%4d%4d",a,b);
for (int i=1; i<(n-1); i++){
     c = a+b;
     printf("%4d",c);
     
     a = b;
     b = c;
}
}