// --------------------- ARMSTRONG NUMBER ---------------------------
//    
//   153  = 1^3 + 5^3 +3^3   = 153
//   9474 = 9^4 + 4^4 + 7^4  = 9474
//
//   Hear 3 and 4 is length of digit
//
//   STRONG NO. 
//      145 = 1! + 4!+ 5! = 145
//      
//
//
// Q Check given input is armstrong number are not 
 #include<stdio.h>
 #include<math.h>
int main(){
int n,t,p,l=0,q,s=0;
printf("enter value of n \n");
scanf("%d",&n);

 p = n;
 while(p!=0){
       p = p/10;
       l++;
 }
 printf("%d\n",l);

 q = n;
 while(q!=0){
       t = q%10;
       s = s + pow(t,l);
       q = q/10;
 }
//(s==n)? printf("Armstrong no.\n") :  printf("not a Armstrong no.\n");
if(s==n){
    printf("Armstrong no.\n");
}
else{
    printf("not a Armstrong no.\n");
}
}

