#include<stdio.h>
#include<stdlib.h>
void is_marry(char,int);
int main(void)
{
	char sex;
	int age;
	printf("�п�J�ʧO\n�O�k�ͽп�JA,�k�ͽп�JB\n");
	scanf("%c",&sex);
	printf("�п�J�~��\n");
	scanf("%d",&age);
	is_marry(sex,age);
}
void is_marry(char sex,int age){
	switch(sex){
		case 'a':
		case 'A':
		{
			if(age>=18){
				printf("�b����100�~�H�e�i���B\n");
			}
			else{
				printf("�b����100�~�H�e���i���B\n");
			}
			break;
		}
		case 'b':
		case 'B':{
			if(age>=16){
				printf("�b����100�~�H�e�i���B\n");
			}
			else{
				printf("�b����100�~�H�e���i���B\n");
			}
			break;
		}
		default:{
			printf("�п�J���T�N��");
			break;
		}
	}
	
}
