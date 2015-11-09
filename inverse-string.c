#include "stdio.h"
#include "string.h"
/**
* 写一个函数，是输入的一个字符串按反序存放，在主函数中输入和输出字符串；
*/
int main(int argc, char const *argv[])
{
	void inverse (char str[]);
	char str[100];
	printf("input string:\n");
	scanf("%s",str);
	inverse(str);
	printf("inverse string : %s\n", str);
	return 0;
}
void inverse(char str[]){
	char t;
	int i,j;
	for (i = 0, j = strlen(str); i<(strlen(str)/2);i++,j--)
	{
		t= str[i];
		str[i]=str[j-1];
		str[j-1]=t;
	}
}