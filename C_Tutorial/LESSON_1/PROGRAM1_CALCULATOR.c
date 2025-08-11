// program for implementing functions of calulator
#include<stdio.h>
#include<math.h>
//stdint.h
#define PI 3.14
typedef int int32_t;
typedef unsigned int uint32_t;
typedef char int8_t;
typedef long long signed int int64_t;
/*always use camelcase */
float ArithmeticOperations(double ,double );
int main(void)
{
	double a,b,num;
	printf("Enter values of a and b\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	num=ArithmeticOperations(a,b);
	printf("%.5lf",num);
	return 0;
}

float ArithmeticOperations(double x,double y)
{
	double res;
	char ch;
	printf("If 'a' is entered, addition is done, if 's' is entered subraction is done, similarly for other arithmetic operations\n");
	printf("Now Enter the first letter of arithmetic opertaion you want to do: ");
	scanf(" %c",&ch);
	printf(" %c",ch);
	if( (x>0 || x<0) && (y>0 || y<0) )
	{
		if((ch=='A') || (ch=='a'))
		{
			printf("\n Addition op is going to be performed:");
		}
		else if((ch=='S') || (ch=='s'))
		{
			printf("\n Subraction op is going to be performed:");
		}
		else if((ch=='M') || (ch=='m'))
		{
			printf("\n Multiplication op is going to be performed:");
		}
		else
		{
			printf("\n Division op is going to be performed:");
		}
		
	}
	else
	{
		printf("any arithemetic operations between zero and zero results in zero except for division as it results in undefined value when zero is in denominator");
		
	}
	
	switch(ch)
	{
	
		case 'a': case 'A': res= x+y ;
							printf("\n result is : %.5lf ",res);
							break;
	    case 's': case 'S': res= x-y ;
							printf("\n result is : %.5lf",res);
				break;
	    case 'm': case 'M': res= x*y ;
							printf("\n result is : %.5lf",res);
			 	break;
	    case 'd': case 'D': res= x/y ;
							printf("\n result is : %.5lf",res);
				break;
		default : printf("\n entered invalid arithmetic character");
    } 
	printf("\n performing exponential operation:");
	return pow(x,y);			
}
