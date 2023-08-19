// #include<stdio.h>
// int main(){
// int n, p, s, t;
// printf("Enter no \n");
// scanf("%d",&n);

// p = n;
// while(p!=0){
// t = p%10; 
// s = s * 10 + t;
// p = p/10;
// }

// if(n==s){
//     printf("Number is palindrome\n");
//     }
// else {
//     printf("Number is not a palindrome\n");
//     }

// }


// Q.1 input n = 125
//    output   = 1
//               2
//               5
#include<stdio.h>
#include<math.h>

int main(){
int n, p, length, s=0, t, q;
printf("Enter no \n");
scanf("%d",&n);

p = n;
while(p!=0){
p = p/10; 
length++;
}

for(int i=length-1; i>=0; i--){
q = pow(10,i);
t = n/q;
printf("%d\n",t);
n = n%q;
}

}