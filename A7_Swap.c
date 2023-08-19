#include<stdio.h>
int main(){

//******************** SWAP Using three variable ********************    
int a,b;
printf("Enter the value of a and b is :\n");
scanf("%d%d",&a,&b);
printf("Before swap a = %d  b = %d\n",a,b);
int temp = a;
       a = b;
       b = temp;
printf("After swap a = %d  b = %d",a,b);


/*// ******************* SWAP Using only two variable ******************
int a,b;
printf("Enter the value of a and b is :\n");
scanf("%d%d",&a,&b);
printf("Before swap a = %d  b = %d\n",a,b);      // a=4 , b=5
    a = a+b;                                     // a = a+5 = 9
    b = a-b;                                     // b = 9-4 = 5
    a = a-b;                                     // a = 9-5 = 4
printf("After swap a = %d  b = %d",a,b);
*/

/*//******************** SWAP Using *,/ *******************************
int a,b;
printf("Enter the value of a and b is :\n");
scanf("%d%d",&a,&b);
printf("Before swap a = %d  b = %d\n",a,b);      // a=4 , b=5
    a = a*b;                                     // a = 4*5  = 20
    b = a/b;                                     // b = 20/5 = 4
    a = a/b;                                     // a = 20/4 = 5
printf("After swap a = %d  b = %d",a,b);

*/
/*//*************************** Use function for swap *********************************
#include<stdio.h>
 void swap(int a,int b){
   printf("After swap a = %d  b = %d",a,b);
 }
int  main(){
int a,b;
printf("enter the value of a and b is :\n");
scanf("%d%d",&a,&b);
printf("Befire swap a = %d  b = %d\n",a,b);
swap(b,a);
}
*/
}