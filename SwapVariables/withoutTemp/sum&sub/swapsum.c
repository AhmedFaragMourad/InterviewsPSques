/**********************************************************
 * C program to swap variables sum
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 #include"swapsum.h"
 #include"stdio.h"
 void swapsum(int num1,int num2)
 {
	 num1=num1+num2;
	 num2=num1-num2;
	 num1=num1-num2;
	 printf("%i %i",num1,num2);
 }