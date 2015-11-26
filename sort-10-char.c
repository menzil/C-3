#include "stdio.h"
#include "string.h"
/*
*写一个函数，用“起泡法”对输入的10个字符按由小到大大顺序排列。
*/
#define N 10
char str[N];


int main(int argc, char const *argv[])
{
	void sort(char str[]);//函数声明

	int i,flag;
	for(flag=1;flag==1;){
		printf("input string:\n");
		scanf("%s",str);
		if(strlen(str)>N){
			printf("string too long,input again!\n");
		}else{
			flag=0;
		}
	}
	sort(str);
	printf("string sorted:\n");
	for(i = 0; i<N;i++){
		printf("%c", str[i]);
		
	}
	printf("\n");
	return 0;
}

void sort(char str[]){
	int i,j;
	char t;
	for(j=1; j<N;j++){
		for(i=0;(i<N-j)&&(str[i]!='\0');i++){
			if(str[i]>str[i+1]){
				t=str[i];
				str[i] = str[i+1];
				str[i+1]=t;
			}

		}
	}
}