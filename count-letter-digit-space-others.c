#include "stdio.h"
int letter,digit,space,others;
int main(int argc, char const *argv[])
{
	void count (char []);
	char text[80];
	printf("intput string:\n");
	gets(text);
	printf("string:\n");
	puts(text);
	letter = 0;
	digit = 0;
	space = 0; 
	others = 0;
	count(text);
	printf("\n letter:%d \n digit: %d \n space:%d \n others:%d\n",letter,digit,space,others );
	return 0;
}
void count(char str[]){
	int i;
	for ( i = 0; str[i] !='\0'; ++i)
	{
		if ((str[i]>='a'&& str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			letter ++;
		}else if(str[i]>='0' && str[i]<= '9'){
			digit ++;
		}else if(str[i]==32){
			space ++;
		}else{
			others ++;
		}
	}
}