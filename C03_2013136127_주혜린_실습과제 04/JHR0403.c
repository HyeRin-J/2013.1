#include <stdio.h>
#define PHI (3.141592)
#define SQUARE(x) ((x)*(x))

void MyInfo();

int main ()
{
	double radious;//������
	int grade;//�г�
	int i, j, k;//�� ������ �Է��ϼ���
	int n1, n2;//�� ������ �Է��ϼ���

	MyInfo();

	printf("�� ������ �Է��ϼ���==>");
	scanf("%d %d", &n1, &n2);

	printf("********************���������********************\n\n");
	printf("%d + %d = %d\n", n1, n2, n1+n2);
	printf("%d - %d = %d\n", n1, n2, n1-n2);
	printf("%d / %d = %d\n", n1, n2, n1/n2);
	printf("%d X %d = %d\n", n1, n2, n1*n2);
	printf("%d %% %d = %d\n", n1, n2, n1%n2);

	printf("********************���迬����********************\n\n");
	printf("%d > %d = %d\n", n1, n2, n1>n2);
	printf("%d < %d = %d\n", n1, n2, n1<n2);
	printf("%d == %d = %d\n", n1, n2, n1==n2);
	printf("%d <= %d = %d\n", n1, n2, n1<=n2);
	printf("%d >= %d = %d\n", n1, n2, n1>=n2);

	printf("********************���Կ�����********************\n\n");
	printf("%d = %d = %d\n", n1, n2, n1=n2);

	n1=n2;
	n1+=n2;//n1=n1+n2
	n1-=n2;//n1=n1-n2
	n1*=n2;//n1=n1*n2
	n1/=n2;//n1=n1/n2
	n1%=n2;//n1=n1%n2

	n1=300;

	printf("********************��������********************\n\n");
	printf("(3>4) && (1<2) => %d\n", (3>4) && (1<2));//���� 1, ������ 0
	printf("(3>4) || (1<2) => %d\n", (3>4) || (1<2));

	n1=10;
	n2=10;

	printf("********************����������********************\n\n");
	printf("n1++ ==> %d\n", n1++);//���Է� �� ����
	printf("n1 ==> %d\n", n1);//n1=11
	
	printf("++n2 ==> %d\n", ++n2);//������ �� �Է�
	printf("n2 ==> %d\n", n2);//n2=11

	printf("���� �������� �Է����ּ���==>");
	scanf("%lf", &radious);//&�� �ּҶ�� ǥ��
	printf("�Էµ� �������� %lf�Դϴ�.\n", radious);
	printf("PHI=%lf\n", PHI);

	printf("���� �ѷ��� %lf�Դϴ�.\n", 2*radious*PHI);
	printf("���� ���̴� %lf�Դϴ�.\n", SQUARE(radious)*PHI);

	printf("(2+1)*(2+1)\n", SQUARE(2+1));//��ȣ ����

	printf("���� �г��� �Է��ϼ���==>");
	scanf("%d", &grade);
	printf("����� %d�г��Դϴ�.\n", grade);
	printf("����� %d�� �Ŀ� �����մϴ�.\n", 4-grade);

	printf("���� ���: %dI\n", 123);
	printf("���� ���: %5dI\n", 123);
	printf("���� ���: %-5dI\n", 123);
	printf("�Ҽ��� ���: %5.2f\n", PHI);
	printf("�Ҽ��� ���: %5.1f\n", PHI);
	printf("�Ҽ��� ���: %-5.1f\n", PHI);

	printf("�� ������ �Է��ϼ���\n");
	scanf("%d %d %d", &i, &j, &k);
	printf("�Էµ� ���� %d, %d, %d�Դϴ�.\n", i, j, k);

	getchar();
	getchar();

	return 0;
}

void MyInfo()
{
	printf("2013136127\n��ǻ�Ͱ��к�\n������\n");
}