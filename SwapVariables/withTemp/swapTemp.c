/**********************************************************
 * C program to swap variables Temp var 
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 #include"swapTemp.h"
 #include"stdio.h"
 void swapTemp(int num1,int num2)
 {
	 int temp;
	 temp=num1;
	 num1=num2;
	 num2=temp;
	 printf("%i %i",num1,num2);
 }