int JHL01(int n, int r)//2��
{
	int result=n/r/(n-r);
	
	if(n>0)
		if(r>0)
		result=result*JHL01(n-1, r-1);//����Լ�
	
	return result;
}

int JHL02(int n, int r)//3��
{
	int result=n/(n-r);

	if(n>0, r>0)
		result=result*JHL02(n-1, r-1);//����Լ�

	return result;
}