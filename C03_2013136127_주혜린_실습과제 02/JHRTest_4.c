#include <stdio.h>

void whoami ()
{
	printf("******************************\n");
	printf("���� : ������\n");
	printf("�й� : 2013136127\n");
	printf("�Ҽ� : ��ǻ�Ͱ��к�\n");
	printf("******************************\n");
	printf("������ \"���\" ���α׷� Ver.4\n");
	printf("******************************\n");
}

void printGugu (int dan)//dan�� �Է¹޾� 1���� 9������ ���� ����ϴ� �Լ�
{
	int i;//for�� ���� ���� ����

	for(i=1; i<10; i++)//1���� 9���� ����
	{
		printf("%d X %d = %d\n", dan, i, dan*i);
	}
}

int main ()
{
	whoami ();

	int i;//for�� ���� ���� ����

	for(i=2; i<10; i++)//printGugu �Լ��� dan�� �Է��ϴ� �Լ�
	{
		printGugu (i);
	}

	getchar ();//Enter�� ġ�� ����
	return 1;
}