#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


void main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };//必须初始化
	for (int i = 0;i < 10;i++) 
	{
		//&a[i] == a+i,地址相同
		printf("%d,%d,",*(&a[i]),*(a + i));//0,0
		printf("%p,%p,", &a[i], a+i);//006FFE1C,006FFE1C
	}


	system("pause");

}
