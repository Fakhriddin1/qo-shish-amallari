#include <stdio.h>

int main() {
       printf("Arifmetik amallar bilan tanishing \n");
       
       int my_number, your_number;
       printf("mening raqamimmi kiriting: ");
       scanf("%d", &my_number);
       printf("\n");
       printf("sizning raqamingizni kiriting:");
       scanf("%d", &your_number);
       printf("\n");	
       printf("my number : %d \n", my_number);
       printf("your number : %d \n", your_number);
       
       printf("Arifmetik qo'shih => %d + %d = %d \n", my_number, your_number, my_number + your_number);
       printf("Arifmetik ayirish => %d - %d = %d \n", my_number, your_number, my_number - your_number);
       printf("Arifmetik bo'lish => %d / %d = %d \n", my_number, your_number, my_number / your_number);
       printf("Arifmetik ko'paytirish => %d * %d = %d \n", my_number, your_number, my_number * your_number);
       //int devided = my_number % your_number;
       printf("Arifmetik qoldiqli bo'lish => %d (qoldiqli bo'lish)' %d = %d \n", my_number, your_number, my_number % your_number);
       
       
       return 0;
       
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
