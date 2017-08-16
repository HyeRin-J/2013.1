#include <stdio.h>

void whoami ();
void printSizeOfDataTypes ();
void printShortOverflow ();
int myPow (int x, int y);

int main ()
{
	whoami ();
	
	printf("1) ���� �ڷ����� ũ�⸦ ����ϴ� �Լ��� �ۼ��Ͻÿ�.\n");
	printSizeOfDataTypes ();//1.�ڷ����� ũ�⸦ ����ϴ� �Լ� ȣ��

	
	printf("2) short �ڷ������� �����÷ο찡 �߻��ϴ� ������ ã�� �ڵ带 �ۼ��Ͻÿ�.\n");
	printShortOverflow ();//2.short�� �����÷ο찡 �߻��ϴ� ������ ã�� �Լ� ȣ��
	
	//3.x�� y���� ���ϴ� �Լ�
	printf("3) �ڽŸ��� myPow()�Լ��� �����Ͻÿ�.\n");
	printf("%d�� %d���� %d�Դϴ�.\n", 17, 3, myPow(17, 3));//myPow�Լ��� ���� x�� y���� ���� �� �ִ�.
	printf("%d�� %d���� %d�Դϴ�.\n", 6, 7, myPow(6, 6));
	printf("%d�� %d���� %d�Դϴ�.\n", 64353, 100, myPow(64353, 100));//�����÷ο� �߻�

	getchar ();//Enter �Է� ����
	return 1;
}

void whoami()
{
	printf("**************************************\n");
	printf("���� : ������\n");
	printf("�й� : 2013136127\n");
	printf("�Ҽ� : ��ǻ�Ͱ��к�\n");
	printf("**************************************\n");
}

void printSizeOfDataTypes()//1.�ڷ����� ũ�⸦ ����ϴ� �Լ�
{
	printf("�� �ڷ����� ũ�⸦ ����մϴ�.\n");
	printf("          char : %3d byte\n", sizeof(char));//char�� ũ�� ���
	printf("         short : %3d bytes\n", sizeof(short));//short�� ũ�� ���
	printf("unsigned short : %3d bytes\n", sizeof(unsigned short));//unsigned short�� ũ�� ���
	printf("           int : %3d bytes\n", sizeof(int));//int�� ũ�� ���
	printf("          long : %3d bytes\n", sizeof(long));//long�� ũ�� ���
	printf("         float : %3d bytes\n", sizeof(float));//float�� ũ�� ���
	printf("        double : %3d bytes\n\n", sizeof(double));//double�� ũ�� ���
}
void printShortOverflow ()//2.short�� �����÷ο찡 �߻��ϴ� ������ ã�� �Լ�
{
	short score;//short�� ���� ����
	for(score=1; score>0; score=score++)//�����÷� �߻� ������ ����
	{
		printf("\r <%d>", score);
	}
	printf("------>�����÷ο� �߻�(����):<%d>\n\n", score);//�����÷ο� �߻�
	char alarm='\a';
	printf("%c\n", alarm);//����� ���
}
int myPow (int x, int y)//3.x�� y���� ���ϴ� �Լ�
{
	int i;//i�� �����ֱ� ���� ���� ����
	int result=1;//int�� ����� ����

	for(i=0; i<y; i=i++)//y�� ��ŭ x�� ���ϱ� ���� for��
	{
		result=result*x;//������� y����ŭ x�� ���Ѵ�.
	}
	return result;//����� ��ȯ
}