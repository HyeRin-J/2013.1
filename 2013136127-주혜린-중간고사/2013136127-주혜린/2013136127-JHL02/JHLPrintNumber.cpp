#include <stdio.h>

void JHLPrintNumber(int num)
{
	int SipEuk, Euk, ChunMan, BekMan, SipMan, Man;
	int Chun, Bek, Sip;

	SipEuk=num/1000000000;//십억단위
	if(SipEuk>0)//0이상일 경우만 출력
		printf("%d십", SipEuk);

	Euk=(num-SipEuk*1000000000)/100000000;//억 단위
	if(Euk>0)//0이상일 경우
		printf("%d억", Euk);
	if(Euk==0)//0일 경우
		printf("억");

	ChunMan=(num-SipEuk*1000000000-Euk*100000000)/10000000;//천만 단위
	if(ChunMan>0)//0이상일 경우
		printf("%d천", ChunMan);

	BekMan=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000)/1000000;//백만 단위
	if(BekMan>0)//0이상일 경우
		printf("%d백", BekMan);

	SipMan=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000)/100000;//십만 단위
	if(SipMan>0)//0이상일 경우
		printf("%d십", SipMan);

	Man=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000)/10000; //만 단위
	if(Man>0)//0이상일 경우
		printf("%d만", Man);
	if(Man==0)//0일 경우
		printf("만");

	Chun=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000-Man*10000)/1000;//천 단위
	if(Chun>0)//0이상일경우
		printf("%d천", Chun);

	Bek=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000-Man*10000-Chun*1000)/100;//백 단위
	if(Bek>0)//0이상일 경우
		printf("%d백", Bek);

	Sip=(num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000-Man*10000-Chun*1000-Bek*100)/10;//십 단위
	if(Sip>0)//0이상일 경우
		printf("%d십", Sip);

	num=num-SipEuk*1000000000-Euk*100000000-ChunMan*10000000-BekMan*1000000-SipMan*100000-Man*10000-Chun*1000-Bek*100-Sip*10;//일 단위
	if(num>0)//0이상일 경우
		printf("%d", num);

	printf("\n");
}