// *********** Q.1 find value of(X^n) is with out pow function is : *************
//  X* X* X* X* X* X* X* X* X*-----------------------*X
// #include<stdio.h>
// int main(){
// int x,n,s=1;
// printf("Enter the value of  x and n si :\n");
// scanf("%d%d",&x,&n);
// for(int i=1; i<=n; i++){
//     s=s*x;
// }
// printf("ANS = %d\n",s);
// }

// *********** Q.2 find factorial of(n!) is with out pow function is : *************
//  1*2*3*4*5*6*7*8*9*---------------------------*n
// #include<stdio.h>
// int main(){
// int n,f=1;
// printf("Enter the value of  n si :\n");
// scanf("%d",&n);
// for(int i=1; i<=n; i++){
//     f=f*i;
// }
// printf("ANS = %d\n",f);
// }


// Q.3 x^0* x^1* X^2* x^3*-----------------------*x^n
//       1* x^1* X^2* x^3*-----------------------*x^n
// #include<stdio.h>
// #include<math.h>
// int main(){
// int x,n,s=1;
// printf("enter x ,n\n");
// scanf("%d%d",&x,&n);
// for(int i=0;i<=n; i++){
//     s=s*pow(x,i);
// }
// printf("\nANS = %d",s);
// }


// // Q.4 x^1+ X^2+ x^3+------------------------------+x^n                    
// #include<stdio.h>
// #include<math.h>                                  //series is not start to 1 so s=0;
// int main(){                                       // if series start to 1 so s=1;
// int x,n,s=0;
// printf("enter x ,n\n");
// scanf("%d%d",&x,&n);
// for(int i=0;i<=n; i++){
//     s=s+pow(x,i);
// }
// printf("%d",s);
// }

// // Q.5 1- x^1+ X^2- x^3- -------------------------- +x^n
// #include<stdio.h>
// #include<math.h>                                  // odd place are negative (-)
// int main(){
// int x,n,s=1;
// printf("enter x ,n\n");
// scanf("%d%d",&x,&n);
// for(int i=0;i<=n; i++){
//     s=s+pow(-1,i)*pow(x,i);
// }
// printf("%d",s);
// }

// // Q.6  1+ x^1- X^2+ x^3+ -------------------------- -x^n
// #include<stdio.h>
// #include<math.h>                                  // odd place are positive  (+)
// int main(){
// int x,n,s=1;
// printf("enter x ,n\n");
// scanf("%d%d",&x,&n);
// for(int i=0;i<=n; i++){
//     s=s+pow(-1,i+1)*pow(x,i);
// }
// printf("%d",s);
// }


// // Q.7 1+ (x^1)/1+ (X^2)/2+ (x^3)/3+ ------------------------------ +(x^n)/n                    
// #include<stdio.h>
// #include<math.h>                                  
// int main(){                                       
// int x,n,s=1;
// printf("enter x ,n\n");
// scanf("%d%d",&x,&n);
// for(int i=0;i<=n; i++){
//     s=s+pow(x,i)/i;
// }
// printf("%d",s);
// }


// // Q.8  1+ (x^1)/1!+ (X^2)/2!+ (x^3)/3!+ ------------------------------ +(x^n)/n!                 
#include<stdio.h>
#include<math.h>                                  
int main(){                                       
int x,n,f=1;
float s=1;
printf("enter x ,n\n");
scanf("%d%d",&x,&n);
for(int i=1; i<=n; i++){
    f=f*i;
    s=s+(pow(x,i)/f);
}
printf("%f",s);
}


// // Q.9  1- (x^1)/1!+ (X^2)/2!- (x^3)/3!+ ------------------------------ -(x^n)/n!                 
// #include<stdio.h>
// #include<math.h>                                  // odd place are negative (-)
// int main(){                                       
// int x,n,f=1,s=0;
// printf("enter x ,n\n");
// scanf("%d%d",&x,&n);
// for(int i=0;i<=n; i++){
//     f=f*i;
//     s=s+pow(-1,i)*pow(x,i)/f;
// }
// printf("%d",s);
// }