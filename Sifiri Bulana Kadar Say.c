#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num1,num2;
	printf("1. Sayiyi giriniz: ");
	scanf("%d", &num1);
	
	printf("2. Sayiyi giriniz: ");
	scanf("%d", &num2);
	
	while(num1>0&&num2>0)
	{
		if(num1>=num2)
		{
			num1=num1-num2;
			printf("%d",num1);
		}
		else
		{
			num2=num2-num1;
			printf("%d",num2);
		}
		
		printf("\n");
		
	}
	
	return 0;
}
