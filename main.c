/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
    float e_num_1, e_num_2, e_num_3;
    printf("Entre com o primeiro valor:");
    scanf ("%f", &e_num_1);
    printf("Entre com o segundo valor:");
    scanf ("%f", &e_num_2);
    printf("Entre com o terceiro valor:");
    scanf ("%f", &e_num_3);
    
    if (e_num_1>e_num_2){
      if (e_num_2>e_num_3){
        printf("%f\n", e_num_3);
        printf("%f\n", e_num_2);
        printf("%f\n", e_num_1);

        }
    else if(e_num_1>e_num_3){
        printf("%f\n", e_num_2);
        printf("%f\n", e_num_3);
        printf("%f\n", e_num_1);
        }
    else {
        printf("%f\n", e_num_2);
        printf("%f\n", e_num_1);
        printf("%f\n", e_num_3);
        }
    
    }else if(e_num_1>e_num_3){
        printf("%f\n", e_num_3);
        printf("%f\n", e_num_1);
        printf("%f\n", e_num_2);
        }
    else if (e_num_2>e_num_3){
        printf("%f\n", e_num_1);
        printf("%f\n", e_num_3);
        printf("%f\n", e_num_2);
        }
    else {
        printf("%f\n", e_num_1);
        printf("%f\n", e_num_2);
        printf("%f\n", e_num_3);
        
    }
   
    
        
    
        
    
    
        
        

    return 0;
}
