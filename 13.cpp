#include<stdio.h>
#include<stdlib.h>
void is_marry(char,int);
int main(void)
{
	char sex;
	int age;
	printf("請輸入性別\n是男生請輸入A,女生請輸入B\n");
	scanf("%c",&sex);
	printf("請輸入年齡\n");
	scanf("%d",&age);
	is_marry(sex,age);
}
void is_marry(char sex,int age){
	switch(sex){
		case 'a':
		case 'A':
		{
			if(age>=18){
				printf("在民國100年以前可結婚\n");
			}
			else{
				printf("在民國100年以前不可結婚\n");
			}
			break;
		}
		case 'b':
		case 'B':{
			if(age>=16){
				printf("在民國100年以前可結婚\n");
			}
			else{
				printf("在民國100年以前不可結婚\n");
			}
			break;
		}
		default:{
			printf("請輸入正確代號");
			break;
		}
	}
	
}
