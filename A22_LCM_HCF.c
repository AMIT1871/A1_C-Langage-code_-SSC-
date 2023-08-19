// ---------------------- LCM/HCF-----------------------------------
// LCM -> LCM of two number's is the smalest number whic can be 
//        divided by both number's.

// HCF/GDC -> The HCF or GCD of two number's is the largest intege
//            that can exactly  divided both number's.


//****************************** LCM ****************************
#include<stdio.h>
int main(){
int n1,n2,max;
printf("Enter the value of n1 and n2 is :\n");
scanf("%d%d",&n1,&n2);
max = (n1>n2)?n1:n2;

while (1){
  if(max%n1==0 && max%n2==0){
    printf("LCM = %d",max);
    break;
  }
max++;
}
}

//***************************** HCF/GCD ***************************
// #include<stdio.h>
// int main(){
// int n1,n2,gcd;
// printf("Enter the value of n1 and n2 is :\n");
// scanf("%d%d",&n1,&n2);
// for (int i=1; i<=n1 && i<=n2; i++){
// if(n1%i==0 && n2%i==0){
//    gcd = i;
// }
// }
// printf("HCF = %d\n",gcd);
// }


// ***************** wap to finde LCM using GCD *********************
// #include<stdio.h>
// int main(){
// int n1,n2,gcd,LCM;
// printf("Enter the value of n1 and n2 is :\n");
// scanf("%d%d",&n1,&n2);
// for (int i=1; i<=n1 && i<=n2; i++){
// if(n1%i==0 && n2%i==0){
//    gcd = i;
// }
// }
// LCM = (n1*n2)/gcd;
// printf("HCF = %d\n",gcd);
// printf("LCM = %d",LCM);
// }






