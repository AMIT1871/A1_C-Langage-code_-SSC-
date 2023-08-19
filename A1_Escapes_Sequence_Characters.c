#include<stdio.h>
int main(){
     
     //*****************Escapes Secquence Characters**********************

            // \n ----------> for new line
            // \b ----------> back space
            // \t ----------> tab space 
            // \a ----------> alert
            // \r ----------> carriange return 
            // \" ----------> double quete
            // \\ ----------> slashs
            // %% ----------> Print %
            // %.2d --------> Print specific decimal places
     //**************** PRINT :-( WELCOME AMIT KUMAR )********************
      printf("WELCOME AMIT KUMAR");

      //**************** PRINT :- ( WELCOME  
      //************************* AMIT KUMAR ) ***************************
       printf("\nWELCOME \nAMIT KUMAR");                                    // \n - use

      //**************** PRINT :- ( 16spaces )****************************
      printf("\n1234----------16");                                         // for check spaces
      printf("\n\t\t");                                                     // \t = 8 bits
     
     //**************** PRINT :-( Good evening - 24spaces - bye )*********
     printf("\nGood evening1---------------------24bye");                   // --for comparison
     printf("\nGood evening\t\t\tbye");
      
      //**************** PRINT :-( Use of \b )****************************
      printf("\nWel\bcome");                                                 // \b = Overwrite on previous space
      printf("\nWel\b\bcome");                                               // Backspace

      //**************** PRINT :-( "welcome" )****************************
      printf("\n\"welcome\"");                                              // \" - use
          
      //**************** PRINT :-( \n )***********************************
      printf("\n");
      printf("\\n");                                                         //OutPut is - \n
      printf("\n\\");                                                        //OutPut is - (\)

      //**************** PRINT :-( Use of \a )*************************
      printf("\n AmitKumar\a");
      printf("Amit Kumar \a\a\a\a\a\a\a\a\a");                               // more use of \a for volume up

      //**************** PRINT :-( Use of \r )*************************
      printf("\nSurya\r");                                                    //Cursor shift in begnning
      printf("\nSurya\rDiv");                                                //Output is - Divya

      //**************** PRINT :-( Amit\kumar\kushwaha )***************
      printf("\nAmit\\kumar\\kushwaha");

      //*************** Print Persentage ******************************
      printf("\n%%");
}
