#include<stdio.h>
int sum(int num[],int n)
{
	int k=0,i;
	int max=0;
	for(i=0;i<n;i++)
	{
		if(k<=0)
		{
			k=num[i];
		}
		else
		{
			k=k+num[i];
		}
		if(k>max)
		{
			max=k;
		}
	}
	return max;
}
int main()
{
	int i,n,m;
	scanf("%d",&n);
	int num[100];
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	m=sum(num,n);
	printf("������Ԫ�ص�����Ϊ:%d",m);
	return 0;
}
