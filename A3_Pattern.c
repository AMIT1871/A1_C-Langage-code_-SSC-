#include<stdio.h>
#include<conio.h>
 void main(){                           // *********** Print this pattern *******
    int  i,j;                                
    for( i=1; i<=5; i++){                 //   *
        for( j=1; j<=i;j++){              //   * *
            printf("* ");                 //   * * *
        }                                 //   * * * * 
        printf("\n");                     //   * * * * *
    }   
    
    printf("\nNext pattern is :\n");    //*********** 2 Pattern is ***************                    
    for(int k=1; k<=5; k++){             
        for(int m=5; m>=k; m--){          //   * * * * *
            printf("* ");                 //   * * * * 
        }                                 //   * * *
        printf("\n");                     //   * *
    }                                     //   *
 
    
    printf("\n");                        //************ 3 Pattern is ****************
    for(int x=1; x<=5; x++){
        for(int y=1; y<x; y++){            //  * * * * *
            printf(" ");                   //   * * * *
        }                                  //    * * *
        for(int z=x; z<=5; z++){           //     * *
            printf("* ");                  //      *
        }
        printf("\n");
        }
     
      printf(" \n4th Pattern is :\n\n");         //********* 4 Pattern is ***************
        for (int o=1; o<=64; o++){
            printf("{");                          // {{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{
        }                                         // {{                                    {{
        for(int b=1; b<=10; b++){                 // {{                                    {{
            printf("{{\t\t\t\t\t\t\t\t{{\n");     // {{                                    {{
        }                                         // {{                                    {{
        for (int h=1; h<=66; h++){                // {{                                    {{
            printf("{");                          // {{                                    {{
        }                                         // {{                                    {{
}                                                 // {{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{       
  