
#include<windows.h>
//#include "dlltest.h",����ʹ��ͷ�ļ�������

extern "C" _declspec(dllexport) void fn_a1();
extern "C" _declspec(dllexport) int fn_a2(int,int);
//extern ��C����Ϊ�˷�ֹ���ɵ�dll����������������ʹ��ʱ���ܻᱻ�ı䣬�亯������Ҳ�ᷢ���仯�� ���ӱ���

void fn_a1(){
	MessageBoxA(0, "hello", "world", 0);
}

int fn_a2(int a,int b) {
	return a + b;
}

