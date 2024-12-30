#include<iostream>

long long jc(long long a,long long l)//实现从a*(a-1)*...*(a-l+1)
{
	long long tmp=1;
	while(l--)
	{
		tmp*=a;
		a--;
	}
	return tmp;
}

long long Combination_number(long long m,long long n)//组合数计算
{
	long long x=jc(m,n),y=jc(n,n);
	return x/y;
}


