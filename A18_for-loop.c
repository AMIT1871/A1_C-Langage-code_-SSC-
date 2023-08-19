//----------------------- FOR LOOP -----------------------------------------------------
//  SYNTAX ---- for(initialzation; condition; increment or decrement op){
//                     statement
//                      -------
//                      }


//****************** Q.no.1 Print 1 to 10 no. *******************************************
  #include<stdio.h>
int main(){
    int i;
for(int i=1; i<=10; i++){
printf("%d\n",i);
}
} 


//****************** Q.no.2 Print 1 to n no. *******************************************
/*  #include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of n is :\n");
    scanf("%d",&n);
for(int i=1; i<=n; i++){
printf("%d\n",i);
}
}  */

//****************** Q.no.3 Print n to 1 no. *******************************************
/*  #include<stdio.h>
int main(){                                             // if   int a; 
    int n;                                              //    for(int a;  -- ; --)  
    printf("Enter the value of n is :\n");             // compiler miss bihave when a is two time
    scanf("%d",&n);                                    // initialaization
for( n; n>=1; n--){
printf("%d\n",n);
}
} */

//******************* Q.no.4 Print multiplication table ******************************
/* #include<stdio.h>
int main(){                                             
    int n,i;                                             
    printf("Enter the value of n is :\n");            
    scanf("%d",&n);                                    
for(i=1; i<=10; i++){
    printf("%d X %d = %d\n",n,i,n*i);
}
} */
//******************* Q.no.5 print 1 to n odd no. ****************************
/*   #include<stdio.h>
int main(){                                             
    int n,i;                                             
    printf("Enter the value of n is :\n");            
    scanf("%d",&n);                                    
for(i=1; i<=n; i+=2){
    printf("%d\n",i);
}
}  */


//******************* Q.no.6 print 1 to n even no. ****************************
/*   #include<stdio.h>
int main(){                                             
    int n,i;                                             
    printf("Enter the value of n is :\n");            
    scanf("%d",&n);                                    
for(i=2; i<=n; i+=2){
    printf("%d\n",i);
}
}  */

//******************* Q.no.7 print ASCII table ****************************
/*  #include<stdio.h>
int main(){                                             
    int ch;                                                                          
for(ch=0; ch<=255; ch++){
    printf("%d = %c  ",ch,ch);
}
}  */

//******************* Q.no.8 print ASCII table ****************************
//  #include <stdio.h>

// int main()
// {
// 	int i,k;
// 	for (i=0, k=0; (i< 5 && k < 3); i++, k++)
// 	{
// 		;
// 	}
// 	printf("%d\n",i);
	
// 	return 0;
// }    
