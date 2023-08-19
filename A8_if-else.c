#include<stdio.h>
int main(){

/*//***************** Only use if(Find Greater value) ****************************    
int a,b;
printf("Enter the value of a and b is :\n");
scanf("%d%d",&a,&b);

if(a>b){
    printf("A is Greater Then B");
}
if(a<b){
    printf("B is Greater Then A");
}
if(a==b){
    printf("Both are equal");
}
 
 */
/*//******************* if-else (Even or odd) ***************************************
int a;
printf("Enter the value of a  is :\n");
scanf("%d",&a);
if(a%2==0){
    printf("a is even ");
}
else{   
    printf("a is odd ");
}*/

/*//******************* if-else-if (Finde Greater value) *************************************
int a,b,c;
 printf("Enater the value of a ,b ,c\n");
      scanf("%d%d%d",&a,&b,&c);
      if(a>b && a>c){
        printf(" a is Greatest \n");
      }
      else if(b>a && b>c){                    // a, b, c  are gteater
        printf("b is Greatest  \n");          // a==b > c
      }                                       // b==c > a
      else if(c>a && c>b){                    // c==a > b
         printf("c is Greatest \n");          // a=b=c
        }
     else if(a==b && a>c){
        printf("a=b and Greatest\n");
     }
     else if(b==c && b>a){
        printf("b=c and Greatest");
     }
     else if(c==a && a>b){
        printf("c=a and Greatest");
     }
        else{
            printf("a=b=c");
        }
*/


//****************** Use if-else-if and Fiend the grade of student ****************
int marks ;
printf("Enter your marks :\n");
scanf("%d",&marks);

if(marks>90 && marks<=100){
    printf("Grade : A++\n");
}
else if(marks>80 && marks<=90){
     printf("Grade : A+\n");
}
else if(marks>70 && marks<=80){
     printf("Grade : A\n");
}
else if(marks>60 && marks<=70){
     printf("Grade : B+\n");
}
else if(marks>60 && marks<=70){
     printf("Grade : B\n");
}
else if(marks>=50 && marks<=60){
     printf("Grade : C\n");
}
else if(marks>100){
    printf("Invalid\n");
}
else{
    printf(" You are fail ");
}

}
/*// *********************** General Question's (IMP) *****************************************
#include<stdio.h>
int main(){
if(0){                              // 0=false but it take only true mean(1)
    printf("a\n");                    // print b
}
else{
    printf("b\n");
}
if(1){                              // 1=true because it take only true mean(1)
    printf("a\n");                    // print a
}
else{
    printf("b\n");
}
}
*/