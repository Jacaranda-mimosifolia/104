#include<stdio.h>
#define size 6
int n;
static int numble[size];
int demo(int *subscript,int length); 

int main() 
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&n);
		numble[i]=n;	
	}
	demo(numble,size);
	return 0;
}

int demo(int *subscript,int length)//传递数组的首地址，利用指针获取整个数组 
{
	for(int i=0;i<size;i++)
	{
		printf("numble[%d]=%d\n",i,*(numble+i));
	}
	return 0;
}
