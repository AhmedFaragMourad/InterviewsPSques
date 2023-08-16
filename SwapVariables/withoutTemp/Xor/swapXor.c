/**********************************************************
 * C program to swap variables sum
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 #include"swapXor.h"
 #include"stdio.h"
 void swapXor(int num1,int num2)
 {
	 num1=num1^num2;
	 num2=num2^num1;
	 num1=num2^num1;
	 printf("%i %i",num1,num2);
 }