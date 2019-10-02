//An example of use of while loop
#include<stdio.h>
int main(void)
{
	int i,a=0,sum=0;
	
	printf("Enter 1 to execute the program");
	scanf("%d",&i);
	if(i==1)
	{
     while (a<=10)
	{
		sum+=a;
		a++;
	}	
	printf("1+2+3+4+5+6+7+8+9+10= %d",sum);
	}
	return 0;
}

