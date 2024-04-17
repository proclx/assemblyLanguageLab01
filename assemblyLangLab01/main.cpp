#include <iostream>
using namespace std;

char FORMAT[] = "%s %s %s %s %s %s";
char DESIGN[] = "Design";
char BY[] = "by";
char IVAN[] = "Ivan";
char PROTSAI[] = "Protsai";
char IN[] = "in";
char YEAR[] = "2024";

int main() 
{
	__asm 
	{ 		
		mov eax, offset YEAR
		push eax
		mov eax, offset IN
		push eax
		mov eax, offset PROTSAI
		push eax
		mov eax, offset IVAN
		push eax
		mov eax, offset BY
		push eax
		mov eax, offset DESIGN
		push eax
		mov eax, offset FORMAT
		push eax
		mov edi, printf
		call edi

		pop ebx
		pop ebx
		pop ebx 
		pop ebx
		pop ebx
		pop ebx
		pop ebx
	} 
	std::cout << std::endl;
	system("pause");
	return 0;
}

//#include <iostream>
//using namespace std;
//
//char FORMAT[] = "%s %s\n";
//char HELLO[] = "Hello";
//char WORLD[] = "world";
//
//int main()
//{
//	__asm
//	{
//		mov eax, offset WORLD
//		push eax
//		mov eax, offset HELLO
//		push eax
//		mov eax, offset FORMAT
//		push eax
//		mov edi, printf
//		call edi
//
//		pop ebx
//		pop ebx
//		pop ebx
//	}
//	system("pause");
//	return 0;
//}