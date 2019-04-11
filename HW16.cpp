#include<stdio.h>
#include<stdlib.h>


void translate_1(int);
void map(int);
int main(void)

{
	int num;
	printf("¿é¤J¼Æ¦r");
	scanf("%d",&num);
	translate_1(num);
}

void translate_1(int num)
{
		map(num/100);
		printf("¦Ê");
		map((num%100)/10);
		printf("¬B");
	
		map((num%100)%10);
}
void map(int number)
{
	switch(number)
	{
		case 0:
			printf("¹s");
			break;
		case 1:
			printf("³ü");
			break;
		case 2:
			printf("¶L");
			break;
		case 3:
			printf("°Ñ");
			break;
		case 4:
			printf("¸v");
			break;
		case 5:
			printf("¥î");
			break;
		case 6:
			printf("³°");
			break;
		case 7:
			printf("¬m");
			break;
		case 8:
			printf("®Ã");
			break;
		case 9:
			printf("¨h");
			break;
	}
}
