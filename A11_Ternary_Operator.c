// Specal Operator -
//            ,        Comma Operator
//            sizeof() Operatoe
//            ?:       Ternary Operatir(that is alternate of if-else)

//******************** 1. Greater Value ********************************************
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the value of a and b is :\n");
scanf("%d%d",&a,&b);
c=(a>b)?a:b;
printf("Gratest value = %d",c);
}


//******************** 2. Positive / Negative ********************************************
/*#include<stdio.h>
int main(){
int a;
printf("Enter the value of a and b is :\n");
scanf("%d",&a);
printf("a is %d",(a>=0)?printf("Positive"):printf("Negative"));
}
*/

//******************** 3. Even / Odd ********************************************
/*#include<stdio.h>
int main(){
int a;
printf("Enter the value of a and b is :\n");
scanf("%d",&a);
printf("a is ",(a%2==0)?printf("Even"):printf("Odd"));
}
*/

//******************** 4. Leapyear or not ********************************************
/*#include<stdio.h>
int main(){
int year;
printf("Enter the value of a and b is :\n");
scanf("%d",&year);
 printf("year is ",(year%4==0 && year%100!=0 || year%400==0)?
 printf("Leap year"):printf("Not a Leap Year"));
}
*/

