//--------------------- DO WHILE LOOP ---------------------------------------------
// SYNTAX--   do{printf("---");
//                i++;
//                 }
//            while(condition);


//********************* Q.no.1 print 1 to 10 no.************************************
#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=10);
}  

/*//********************* Q.no.2 print 1 to n no.****************************************
#include<stdio.h>
int main(){
int i=1,n;
printf("\nenter the value of n :\n");
scanf("%d",&n);
do{
    printf("%d\n",i);
    i++;
}
while(i<=n);
} */

//********************* Q.no.3 print n to 1 no.****************************************
/*#include<stdio.h>
int main(){
    int n;
printf("Enter the valueof n is :\n");
scanf("%d",&n);
do{
    printf("%d\n",n);
    n--;
}
while(n>=1);
}   */

//********************* Q.no.4 print multiplication table************************
/* #include<stdio.h>
int main(){
    int n,i=1;
    printf("enter the value of n is :\n");
    scanf("%d",&n);
    do{
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    while(i<=10);
}  */

//********************* Q.no.5 print ASCII table****************************************
/*  #include<stdio.h>
int main(){
int ch=0 ;
do{
    printf(" %c = %d  ",ch,ch);
    ch++;
}
while(ch<=255);
}  */

//********************* Q.no.6 Sum of n number's ****************************************
/*  #include<stdio.h>
int main(){
    int n,i=1,s=0;                                 // sum = like 1+2+3+......+n
    printf("Enter the value of n is :\n");
    scanf("%d",&n);
    do{
        s=s+i;
        i++;
    }
    while(i<=n);
    printf("Sum of n no. is : %d",s);
}  */


//*********** Q.no.7 mpultiplication of n no. ********************************
/*  #include<stdio.h>
int main(){
int n,i=1,m=1;
printf("Enter the value of n is :\n");               // mul. =  like 1*2*3*......*n
scanf("%d",&n);
do{
    m = m*i;
    i++;
}
while(i<=n);
    printf("%d",m);

}  */


//*********** Q.no.8 mpultiplication of n no. ***************************************
/*  #include<stdio.h>
int main(){
int n,i=1,m=0;
printf("Enter the value of n is :\n");               // mul. =  like 1*1+2*2+3*3......+n*n
scanf("%d",&n);
do{
    m = m+i*i;
    i++;
}
while(i<=n);
    printf("%d",m);
}   */
