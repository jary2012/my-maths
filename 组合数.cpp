#include<bits/stdc++.h>
using namespace std;

long long m,n;

long long jc(long long a,long long l)//ʵ�ִ�a*(a-1)*...*(a-l+1)
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
	cin>>m>>n;//�����������������ѡ����
	long long x=jc(m,n),y=jc(n,n);//�����ĸ������
	cout<<x/y;//���������
	return 0;
}
