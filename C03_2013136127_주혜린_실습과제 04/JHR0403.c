#include <stdio.h>
#define PHI (3.141592)
#define SQUARE(x) ((x)*(x))

void MyInfo();

int main ()
{
	double radious;//반지름
	int grade;//학년
	int i, j, k;//세 정수를 입력하세요
	int n1, n2;//두 정수를 입력하세요

	MyInfo();

	printf("두 정수를 입력하세요==>");
	scanf("%d %d", &n1, &n2);

	printf("********************산술연산자********************\n\n");
	printf("%d + %d = %d\n", n1, n2, n1+n2);
	printf("%d - %d = %d\n", n1, n2, n1-n2);
	printf("%d / %d = %d\n", n1, n2, n1/n2);
	printf("%d X %d = %d\n", n1, n2, n1*n2);
	printf("%d %% %d = %d\n", n1, n2, n1%n2);

	printf("********************관계연산자********************\n\n");
	printf("%d > %d = %d\n", n1, n2, n1>n2);
	printf("%d < %d = %d\n", n1, n2, n1<n2);
	printf("%d == %d = %d\n", n1, n2, n1==n2);
	printf("%d <= %d = %d\n", n1, n2, n1<=n2);
	printf("%d >= %d = %d\n", n1, n2, n1>=n2);

	printf("********************대입연산자********************\n\n");
	printf("%d = %d = %d\n", n1, n2, n1=n2);

	n1=n2;
	n1+=n2;//n1=n1+n2
	n1-=n2;//n1=n1-n2
	n1*=n2;//n1=n1*n2
	n1/=n2;//n1=n1/n2
	n1%=n2;//n1=n1%n2

	n1=300;

	printf("********************논리연산자********************\n\n");
	printf("(3>4) && (1<2) => %d\n", (3>4) && (1<2));//참은 1, 거짓은 0
	printf("(3>4) || (1<2) => %d\n", (3>4) || (1<2));

	n1=10;
	n2=10;

	printf("********************증감연산자********************\n\n");
	printf("n1++ ==> %d\n", n1++);//선입력 후 증가
	printf("n1 ==> %d\n", n1);//n1=11
	
	printf("++n2 ==> %d\n", ++n2);//선증가 후 입력
	printf("n2 ==> %d\n", n2);//n2=11

	printf("원의 반지름을 입력해주세요==>");
	scanf("%lf", &radious);//&은 주소라는 표시
	printf("입력된 반지름은 %lf입니다.\n", radious);
	printf("PHI=%lf\n", PHI);

	printf("원의 둘레는 %lf입니다.\n", 2*radious*PHI);
	printf("원의 넓이는 %lf입니다.\n", SQUARE(radious)*PHI);

	printf("(2+1)*(2+1)\n", SQUARE(2+1));//괄호 실험

	printf("현재 학년을 입력하세요==>");
	scanf("%d", &grade);
	printf("당신은 %d학년입니다.\n", grade);
	printf("당신은 %d년 후에 졸업합니다.\n", 4-grade);

	printf("숫자 출력: %dI\n", 123);
	printf("숫자 출력: %5dI\n", 123);
	printf("숫자 출력: %-5dI\n", 123);
	printf("소수점 출력: %5.2f\n", PHI);
	printf("소수점 출력: %5.1f\n", PHI);
	printf("소수점 출력: %-5.1f\n", PHI);

	printf("세 정수를 입력하세요\n");
	scanf("%d %d %d", &i, &j, &k);
	printf("입력된 값은 %d, %d, %d입니다.\n", i, j, k);

	getchar();
	getchar();

	return 0;
}

void MyInfo()
{
	printf("2013136127\n컴퓨터공학부\n주혜린\n");
}