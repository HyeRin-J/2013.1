#include <stdio.h>

void JHLPrintNumber(int num)
{
	int SipEuk, Euk, ChunMan, BekMan, SipMan, Man;
	int Chun, Bek, Sip;

	SipEuk=num/1000000000;//�ʾ����
	if(SipEuk>0)//0�̻��� ��츸 ���
		printf("%d��", SipEuk);

	Euk=(num-SipEuk*1000000000)/100000000;//�� ����
	if(Euk>0)//0�̻��� ���
		printf("%d��", Euk);
	if(Euk==0)//0�� ���
		printf("��");

	ChunMan=(num-SipEuk*1000000000-Euk*100000000)/10000000;//õ�� ����
	if(ChunMan>0)//0�̻��� ���
		printf("%dõ", ChunMan);

	BekMan=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000)/1000000;//�鸸 ����
	if(BekMan>0)//0�̻��� ���
		printf("%d��", BekMan);

	SipMan=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000)/100000;//�ʸ� ����
	if(SipMan>0)//0�̻��� ���
		printf("%d��", SipMan);

	Man=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000)/10000; //�� ����
	if(Man>0)//0�̻��� ���
		printf("%d��", Man);
	if(Man==0)//0�� ���
		printf("��");

	Chun=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000-Man*10000)/1000;//õ ����
	if(Chun>0)//0�̻��ϰ��
		printf("%dõ", Chun);

	Bek=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000-Man*10000-Chun*1000)/100;//�� ����
	if(Bek>0)//0�̻��� ���
		printf("%d��", Bek);

	Sip=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000-Man*10000-Chun*1000-Bek*100)/10;//�� ����
	if(Sip>0)//0�̻��� ���
		printf("%d��", Sip);

	num=num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000-Man*10000-Chun*1000-Bek*100-Sip*10;//�� ����
	if(num>0)//0�̻��� ���
		printf("%d", num);

	printf("\n");
}