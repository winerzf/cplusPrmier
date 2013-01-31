#include <iostream>
using namespace std;
int main()
{
	int base, exponent;
	cout<<"请输入底数:";
	cin>>base;
	cout<<"\n请输入幂数:";
	cin>>exponent;
	if(exponent<1)
	{
		cout <<"幂数必须为大于0的整数\n";
		return -1;
	}
	long result=base;
	for(int i=1;i<exponent;i++)
	{
		result*=base;	
		cout<<result<<endl;
	}
	cout<<"\n结果为:"<<result<<endl;
	return 0;
}
