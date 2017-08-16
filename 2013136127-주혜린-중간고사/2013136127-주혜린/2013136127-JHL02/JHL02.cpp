#include <stdio.h>
#include "JHLMath.h"

void JHLPrintNumber(int num);
void Menu();


void JHLInfo()//���� ���
{
	printf("+=============================================================+\n");
	printf("|C ���α׷��� �߰���� 2�� ����                               |\n");
	printf("|��¥ : 2013�� 5�� 3��                                        |\n");
	printf("|�й� : 2013136127                                            |\n");
	printf("|�̸� : ������(JHL)                                           |\n");
	printf("+=============================================================+\n");
	printf("|���� : ��� �Լ� �����ϱ�                                  |\n");
	printf("+-------------------------------------------------------------+\n");
}

int main ()
{
	int num;
	char i;
	int n, r;

	JHLInfo();

	Menu();

	while(1){	
		printf("�޴��� �Է��ϼ���==>");
		scanf("%c", &i);
		
		switch(i){
			case '1':
				printf("����� ���ڸ� �Է��ϼ���=");
				scanf("%d", &num);//����� ���� �Է�
				
				JHLPrintNumber(num);
				break;
			case '2':
				printf("n���� ���� �ٸ� ���� �� �ߺ����� �ʵ��� ���� ���� r�� �̴� ����� ���� ����մϴ�.\n");
				printf("n��=");
				scanf("%d", &n);
				printf("r��=");
				scanf("%d", &r);

				printf("%d\n", JHL01(n, r));
				break;
			case '3':
				printf("n���� ���� �ٸ� ���� �� �ߺ����� �ʵ��� ������ ����� r�� �̴� ����� ���� ����մϴ�.\n");
				printf("n��=");
				scanf("%d", &n);
				printf("r��=");
				scanf("%d", &r);

				printf("%d\n", JHL02(n, r));
				break;
			case 'q':
				printf("���α׷��� �����մϴ�\n");
		}
		if(i=='q') break;
	}

	getchar();
	getchar();
	return 0;
}

void Menu()
{
	printf("[1]1�� �Լ� �׽�Ʈ[2]2�� �Լ� �׽�Ʈ[3]3�� �Լ� �׽�Ʈ[q]���α׷� ����\n");
}