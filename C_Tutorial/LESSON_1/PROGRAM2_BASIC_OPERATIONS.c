// program for implementing functions of calulator
#include<stdio.h>
#include<stdbool.h>
float various_ops(double ,double );
void logical_ops(double,double);
void Assignment_ops(double ,double );
void Relational_ops(double ,double );
void bitwise_ops(double ,double );
void increment_decrement();
int main(void)
{
	double a,b,num;
	printf("Enter values of a and b\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	various_ops(a,b);
	
	return 0;
}

float various_ops(double x,double y)
{
	double res,p,q;
	p=x;
	q=y;
	logical_ops( p,q);
}

void logical_ops(double m,double n)
{
	double i,j;
	int res;
	i=m;
	j=n;
	printf("--------------  PERFORMING LOGICAL OP'S   ----------------");
	res=(m || n);
	printf("\n result of OR logical operation is %d", res);
	res=(m && n);
	printf("\n result of AND logical operation is %d", res);
	res=(!m);
	printf("\n result of NOT logical operation is %d", res);
	Assignment_ops(i,j);
	Relational_ops(i,j);
	bitwise_ops(i,j);
	increment_decrement();
	return ;
}

void Assignment_ops(double c,double d)
{
	double res;
	printf("\n --------------  PERFORMING ASSIGNMENT OP'S   ----------------\n");
	c+=d;
	printf("\n result after addition cum assignment operation is %lf",c);
	/*
	% operation cannot be done in between 2 double values.
	*/
	c/=d;
	printf("\n result after division cum assignment operation is %lf",c);
	return ;
}
void Relational_ops(double c,double d)
{
	bool res;
	printf("\n --------------  PERFORMING RELATIONAL OP'S   ----------------\n");
	if(res=(c==d))
	{
		printf("\n both are equal and is true i.e %d",res);
	}
	else
	{
		res=0;
		printf("\n botha are not equal and is false i.e %d",res);
		if(res=(c>d))
		{
			printf("\n c(a) is greater than d(b)) and is true i.e %d ",res);
		}
		else
		{
			printf("\n c(a) is greater than d(b) and is false i.e %d ",res);
		}
	}
	return ;
}

void bitwise_ops(double var1,double var2)
{
	long a1,b1,res;
	a1=var1;
	b1=var2;
	printf("\n --------------  PERFORMING BITWISE OP'S   ----------------\n");
	res= (a1 | b1);
	printf("\n result of bitwise OR is %ld\n",res);
	res= (a1 & b1);
	printf("\n result of bitwise AND is %ld\n",res);
	res=a1<<b1;
	printf("\n result of bitwise LEFTSHIFT is %ld\n",res);
	res=a1>>b1;
	printf("\n result of bitwise RIGHTSHIFT is %ld\n",res);
	res=~res;
	printf("\n result of bitwise NEGATION is %ld\n",res);
	res=(a1^b1);
	printf("\n result of bitwise XOR is %ld\n",res);
	return ;
}

void increment_decrement()
{
	int x,y;
	x=printf("\n --------------  PERFORMING INCREMENT DECREMENT OP'S   ----------------\n");
	y=x++;
	printf("\n value after post_increment is %d\n",y);
	y=++x;
	printf("\n value after pre_increment is %d\n",y);
	y=x--;
	printf("\n value after post_decrement is %d\n",y);
	y=--x;
	printf("\n value after pre_decrement is %d\n",y);
	return ;
	
}



