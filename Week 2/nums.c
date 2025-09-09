#include <stdio.h>
#include <limits.h>

int main(void) {
	//char 1바이트(문자)
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n",ch);
	printf("Max: %d\n",CHAR_MAX);
	printf("MIN: %d\n",CHAR_MIN);
	//signed short int 2바이트(정수)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX);
	printf("MIN: %d\n", SHRT_MIN);
	//unsigned short int 2바이트(정수)
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX);
	//signed int 4바이트(정수)
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);
	printf("MIN: %d\n", INT_MIN);
	//unsigned int 4바이트(정수)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("Value: %u\n", uint);
	printf("Max: %u\n", UINT_MAX);
	//long은 다른 운영체제에서 다른 크기를 가진다.
	// 보통 4바이트이지만 Linux/Unix/Mac에서 8바이트
	// Windows에서 longlong은 8바이트
	//signed long int 4바이트(정수)
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);
	printf("MIN: %d\n", LONG_MIN);
	//unsigned long int 4바이트(정수)
	unsigned long int ulong = 123456789U;
	printf("\nunsigned long int:\n");
	printf("Value: %lu\n", ulong);
	printf("Max: %lu\n", ULONG_MAX);
	//float 4바이트(실수)(항상부호있음)
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("Value: %.3f\n", f);
	//double 8바이트(실수)(항상부호있음)
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value: %.3lf\n", d);
	

	return 0;
}