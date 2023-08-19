// Q.1 enter 1 to 7 and print 1.monday
//                            2.tuesday
//                              ------
//                            7.sunday
//   in switch case float data type -> float a=5.6 is in not vslifd 
//   as well as float variable is also not valid;  

// #include<stdio.h>
// int main(){
//  char d;
// printf("Enter choice  1 to 7 is:\n");
// scanf("%d",&d);

// switch (d)
// {
// case 1 : 
//     printf("monday\n");
//     break;

// case 2 : 
//     printf("Tuesday\n");
//     break;

// case 3 : 
//     printf("Wednesday\n");
//     break;

// case 4 : 
//     printf("Thrusday\n");
//     break;

// case 5 : 
//     printf("Friday\n");
//     break;

// case 6 : 
//     printf("Saturday\n");
//     break;

// case 7 : 
//     printf("Sunday\n");
//     break;

// default:
//     printf("You are enterd incalid input : \n");
//     break;
// }
// }



// Q.2 Print 0.Zero  1.One ------------------------------- 9.Nine
// #include<stdio.h>
// int main(){
//  char d;
// printf("Enter choice  0 to 9 is:\n");
// scanf("%d",&d);

// switch (d){
// case 0: printf("Zrro\n"); break;
// case 1: printf("One\n"); break;
// case 2: printf("Two\n"); break;
// case 3: printf("Three\n"); break;
// case 4: printf("Four\n"); break;
// case 5: printf("Five\n"); break;
// case 6: printf("Six\n"); break;
// case 7: printf("Seven\n"); break;
// case 8: printf("Eight\n"); break;
// case 9: printf("Nine\n"); break;
// default: printf("You are enterd incalid input : \n"); break;
// }
// }



// // Q.3 Menu derive arithmatic operation ------------------------------- 9.Nine
// #include<stdio.h>
// int main(){
//  int a,b,c;
// printf("Enter the value of a and b is:\n");
// scanf("%d%d",&a,&b);
// printf("Menu\n 1.ADD\n 2.SUB\n 3.MUL\n");
// scanf("%d",&c);

// switch (c){
// case 1: printf("SUM = %d\n",a+b); break;
// case 2: printf("SUB = %d\n",a-b); break;
// case 3: printf("MUL = %d\n",a*b); break;
// default: printf("You are enterd incalid input : \n"); break;
// }
// }


// // Q.4 Show manue bar again an again while usre dont want to end ;
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//  int a,b,c;
// printf("Enter the value of a and b is:\n");
// scanf("%d%d",&a,&b);
// while (1){
// printf("Menu\n 1.ADD\n 2.SUB\n 3.MUL\n 4.exit\n");
// scanf("%d",&c);

// switch (c){
// case 1: printf("SUM = %d\n",a+b); break;
// case 2: printf("SUB = %d\n",a-b); break;
// case 3: printf("MUL = %d\n",a*b); break;       // break - exit from perticuler case
// case 4: exit(0);                               // exit(0) - exit from hole program <stdlib.h>
// default: printf("You are enterd incalid input : \n"); break;
// }
// }
// }


// // Q.5 Check input character is vovel or consonent-------------------------------?
// #include<stdio.h>
// int main(){
//  char d;
// printf("Enter any charactr :\n");
// scanf("%c",&d);

// switch (d){
// case 'a': case 'e': case 'i': case 'o': case 'u': 
// case 'A': case 'E': case 'I': case 'O': case 'U': 
// printf("%C - IS VOVEL\n",d);break;
// default: printf("%c - is consonent:\n",d);break;
// }
// }



// Q.6 Calculate area of tringle,rectangle,squre,circulr--------------?
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
 int   a,b,base,height,length,width,radius;
while (1){
printf("You want to calculate area of \n  1.Triangle\n  2.Rectangle\n  3.circule\n  4.Squre\n  5.exit\n");
scanf("%d",&b);

switch (b){
case 1:
      printf("Enter the value of base and height is:\n");
      scanf("%d%d",&base,&height);
      printf("area of triangle = %.2f m^2\n",(1.0/2.0)*base*height); break;

case 2: 
      printf("Enter the value of lenght and width is:\n");
      scanf("%d%d",&length,&width);
      printf("area of rectangle = %d m^2\n",length*width); break;

case 3: 
      printf("Enter the value of radius is:\n");
      scanf("%d",&radius);
      printf("area of circule = %d m^2\n",3.14*pow(radius,2)); break;  

case 4: 
      printf("Enter the value of a is:\n");
      scanf("%d",&a);
      printf("area of squre = %d m^2\n",pow(a,2)); break;  

case 5: exit(0);                               
default: printf("You are enterd incalid input : \n"); break;
}
}
}


