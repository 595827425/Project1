
#include<windows.h>
//#include "dlltest.h",可以使用头文件来定义

extern "C" _declspec(dllexport) void fn_a1();
extern "C" _declspec(dllexport) int fn_a2(int,int);
//extern “C”是为了防止生成的dll代码在其他编译器使用时可能会被改变，其函数可能也会发生变化。 不加报错

void fn_a1(){
	MessageBoxA(0, "hello", "world", 0);
}

int fn_a2(int a,int b) {
	return a + b;
}

