#include <stdio.h>

void whoami ()
{
	printf("******************************\n");
	printf("���� : ������\n");
	printf("�й� : 2013136127\n");
	printf("�Ҽ� : ��ǻ�Ͱ��к�\n");
	printf("******************************\n");
	printf("������ \"���\" ���α׷� Ver.2\n");
	printf("******************************\n");
}
int main ()
{
	whoami ();

	int i;//for�� ���� ���� ����
	
	for (i=2; i<10; i++)//2�� ���
	{
		printf("2 X %d = %d\n", i, 2*i);
	}
	for (i=2; i<10; i++)//3�� ���
	{
		printf("3 X %d = %d\n", i, 3*i);
	}
	for (i=2; i<10; i++)//4�� ���
	{
		printf("4 X %d = %d\n", i, 4*i);
	}
	for (i=2; i<10; i++)//5�� ���
	{
		printf("5 X %d = %d\n", i, 5*i);
	}
	for (i=2; i<10; i++)//6�� ���
	{
		printf("6 X %d = %d\n", i, 6*i);
	}
	for (i=2; i<10; i++)//7�� ���
	{
		printf("7 X %d = %d\n", i, 7*i);
	}
	for (i=2; i<10; i++)//8�� ���
	{
		printf("8 X %d = %d\n", i, 8*i);
	}
	for (i=2; i<10; i++)//9�� ���
	{
		printf("9 X %d = %d\n", i, 9*i);
	}
	getchar ();//Enter�� ġ�� ����
	return 1;
}