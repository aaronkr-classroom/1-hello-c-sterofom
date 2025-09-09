#include <stdio.h>
#include <limits.h>

int main(void) {
	//char 1����Ʈ(����)
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n",ch);
	printf("Max: %d\n",CHAR_MAX);
	printf("MIN: %d\n",CHAR_MIN);
	//signed short int 2����Ʈ(����)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX);
	printf("MIN: %d\n", SHRT_MIN);
	//unsigned short int 2����Ʈ(����)
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX);
	//signed int 4����Ʈ(����)
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);
	printf("MIN: %d\n", INT_MIN);
	//unsigned int 4����Ʈ(����)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("Value: %u\n", uint);
	printf("Max: %u\n", UINT_MAX);
	//long�� �ٸ� �ü������ �ٸ� ũ�⸦ ������.
	// ���� 4����Ʈ������ Linux/Unix/Mac���� 8����Ʈ
	// Windows���� longlong�� 8����Ʈ
	//signed long int 4����Ʈ(����)
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);
	printf("MIN: %d\n", LONG_MIN);
	//unsigned long int 4����Ʈ(����)
	unsigned long int ulong = 123456789U;
	printf("\nunsigned long int:\n");
	printf("Value: %lu\n", ulong);
	printf("Max: %lu\n", ULONG_MAX);
	//float 4����Ʈ(�Ǽ�)(�׻��ȣ����)
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("Value: %.3f\n", f);
	//double 8����Ʈ(�Ǽ�)(�׻��ȣ����)
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value: %.3lf\n", d);
	

	return 0;
}