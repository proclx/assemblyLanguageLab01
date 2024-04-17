#include <iostream>
using namespace std;

char FORMAT[] = "%s %s\n";
char HELLO[] = "Hello";
char WORLD[] = "world";

int main() 
{
	__asm 
	{ 		
		mov eax, offset WORLD
		push eax
		mov eax, offset HELLO
		push eax
		mov eax, offset FORMAT
		push eax
		mov edi, printf
		call edi

		pop ebx
		pop ebx
		pop ebx
	} 
	system("pause");
	return 0;
}