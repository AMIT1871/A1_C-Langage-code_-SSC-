//---------------- NUMBER SYSTEM -------------------------------------

// Q.1 wap to find length of the number
#include<stdio.h>
int main(){
int n,l=0;
printf("enter value of n \n");
scanf("%d",&n);
 while(n!=0){
    n = n/10;
    l++;
 }
 printf("Length = %d\n",l);
}



// Q.2 wap to print  n = 125
//    5
//    2
//    1
// #include<stdio.h>
// int main(){
// int n,t;
// printf("enter value of n \n");
// scanf("%d",&n);
//  while(n!=0){
//        t = n%10;
//  printf("%d\n",t);
//     n = n/10;
//  }
// }

// Q.3 wap to calculate sum of digits like 
//     n = 125
//     n = (5+2+1)   
// #include<stdio.h>
// int main(){
// int n,t,s=0;
// printf("enter value of n \n");
// scanf("%d",&n);
//  while(n!=0){
//        t = n%10;
//        s = s + t;
//        n = n/10;
//  }
//  printf("%d\n",s);
// }