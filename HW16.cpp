#include<stdio.h>
#include<stdlib.h>


void translate_1(int);
void map(int);
int main(void)

{
	int num;
	printf("��J�Ʀr");
	scanf("%d",&num);
	translate_1(num);
}

void translate_1(int num)
{
		map(num/100);
		printf("��");
		map((num%100)/10);
		printf("�B");
	
		map((num%100)%10);
}
void map(int number)
{
	switch(number)
	{
		case 0:
			printf("�s");
			break;
		case 1:
			printf("��");
			break;
		case 2:
			printf("�L");
			break;
		case 3:
			printf("��");
			break;
		case 4:
			printf("�v");
			break;
		case 5:
			printf("��");
			break;
		case 6:
			printf("��");
			break;
		case 7:
			printf("�m");
			break;
		case 8:
			printf("��");
			break;
		case 9:
			printf("�h");
			break;
	}
}
