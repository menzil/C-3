#include "stdio.h"
#include "string.h"
/*
写一个函数，输入一行字符串，将此字符串中最长的单词输出。
*/
int main(int argc, char const *argv[])
{
	//函数声明
	int alpabetic(char);
	int longest(char string[]);

	int i;
	char line[100];
	printf("input one line:\n");
	gets(line);
	printf("the longest word is :\n");
	for (i = longest(line);alpabetic(line[i]); ++i)
	{
		printf("%c",line[i] );
		
	}
	printf("\n");
	return 0;
}
//判断但钱字符是否字母
int alpabetic(char c){
	if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		return(1);
	}else{
		return (0);
	}
}

int longest(char string[]){
	//flag 表示单词是否开始；len 表示当前单词已累计的字母个数；
	//length 表示先前单词中最长单词长度；point 表示但钱单词的起始位置。
	//place 代表最长单词的起始位置。
	int len=0,i,length = 0,flag=1,place=0,point;
	for(i=0;i<=strlen(string);i++){
		if(alpabetic(string[i])){
			if(flag){
				point = i;
				flag = 0;
			}else{
				len ++;
			}
		}else{
			flag=1;
			if( len>=length ){
				length = len;
				place = point;
				len = 0;
			}
		}
	}
	return(place);
}