//求1000以内所有的水仙花数
#include <stdio.h>
#include<math.h>
int jdg(int n,int sz)
{
	int tmp = n;
	int a = 0;
	int sum=0;
	for(a=0;a<sz;a++)
	{
		sum+=(n%10)*(n%10)*(n%10);
		n/=10;
	}
	if(sum == tmp)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	//掌握水仙花数算法，关键在于提取百位、十位、个位的方法
	/********** Begin **********/
    int i;
	for(i=100;i<=1000;i++)
	{
		int sz = log10(i)+1;
		int a = jdg(i,sz);
		if(a==1)
		{
			printf("%d ",i);
		}
	}
   /********** End **********/
	return 0;
}