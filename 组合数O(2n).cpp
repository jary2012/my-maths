#include<bits/stdc++.h>
using namespace std;

long long m,n;

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

int main()
{
	cin>>m>>n;//输入组合数总数量，选择数
	long long x=jc(m,n),y=jc(n,n);//计算分母，分子
	cout<<x/y;//计算组合数
	return 0;
}
