#include <stdio.h>

void whoami ()
{
	printf("******************************\n");
	printf("���� : ������\n");
	printf("�й� : 2013136127\n");
	printf("�Ҽ� : ��ǻ�Ͱ��к�\n");
	printf("******************************\n");
	printf("������ \"���\" ���α׷� Ver.3\n");
	printf("******************************\n");
}

void printHanDan (int dan)//�� ���� ����ϴ� �Լ�
{
	printf("%d X 1 = %d\n", dan, dan*1);
	printf("%d X 2 = %d\n", dan, dan*2);
	printf("%d X 3 = %d\n", dan, dan*3);
	printf("%d X 4 = %d\n", dan, dan*4);
	printf("%d X 5 = %d\n", dan, dan*5);
	printf("%d X 6 = %d\n", dan, dan*6);
	printf("%d X 7 = %d\n", dan, dan*7);
	printf("%d X 8 = %d\n", dan, dan*8);
	printf("%d X 9 = %d\n", dan, dan*9);
}

int main ()
{
	whoami ();

	printHanDan (2);//2�� ���
	printHanDan (3);//3�� ���
	printHanDan (4);//4�� ���
	printHanDan (5);//5�� ���
	printHanDan (6);//6�� ���
	printHanDan (7);//7�� ���
	printHanDan (8);//8�� ���
	printHanDan (9);//9�� ���

	getchar ();//Enter�� ġ�� ����
	return 1;
}