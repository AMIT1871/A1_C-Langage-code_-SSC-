// Q.2 Check given input is strong number are not 
#include<stdio.h>
 #include<math.h>
int main(){
int n,t,q,f=1,s=0;
printf("enter value of n \n");
scanf("%d",&n);

 q = n;
 while(q!=0){
       t = q%10;
       f = 1;               // whin lo op again run f = 1
       for(int i=1; i<=t; i++){
           f = f*i;
       }
       s = s + f;
       q = q/10;
 }
 printf("str = %d\n",s);
if(n==s){
    printf("strong no.\n");
}
else{
    printf("not a strong no.\n");
}
}