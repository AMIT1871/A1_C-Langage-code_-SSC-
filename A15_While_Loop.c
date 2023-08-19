//########################  ( LOOP'S ) ############################################ 
//
//  LOOP'S - 1) while loop
//           2) do while loop
//           3) for loop
//
// 1) while loop -    Syntax
//                    while(condition){
//                          teue
//                          statement
//                         -----------
//                       }
//**************** Q.no.1- print 1 to 10 no. ***************************************
#include<stdio.h>
int main(){
int i=1,n;
printf("enter value of n \n");
scanf("%d",&n);
while(i<=n){
    printf("%d\n",i);
    i++;
   }
}

//*************** Q.no.2- print among 1 to n Odd no. ********************************
/*
#include<stdio.h>
int main(){
int i=1,n;
printf("enter value of n \n");
scanf("%d",&n);
while(i<=n){
    printf("%d\n",i);
    i+=2;
    }
} */

//**************** Q.no.3- print among 1 to n Even no *******************************
/*
#include<stdio.h>
int main(){
int i=2,n;
printf("enter value of n \n");
scanf("%d",&n);
while(i<=n){
    printf("%d\n",i);
    i+=2;
   }
} */

//***************** Q.no.4- printn to n to 1 no. **********************************
/*
#include<stdio.h>
int main(){
int n;
printf("enter value of n \n");
scanf("%d",&n);
while(n>=1){
    printf("%d\n",n);
    n--;
   }
} */

//****************** Q.no.2- print ASCII table **************************************
/*
#include<stdio.h>
int main(){
int i=0;
while(i<=255){
    printf("%d = %c ",i,i);
    i++;
    }
}

*/