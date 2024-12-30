#include<iostream>

long long jc(long long a,long long l)//a*(a-1)*...*(a-l+1)
{
	long long tmp=1;
	while(l--)
	{
		tmp*=a;
		a--;
	}
	return tmp;
}

long long Combination_number(long long m,long long n)
{
	long long x=jc(m,n),y=jc(n,n);
	return x/y;
}


