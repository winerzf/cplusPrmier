#include <iostream>
using namespace std;
int main()
{
	int v1,v2,low,height;
	cout<<"input two int different numbers"<<endl;
	cin>>v1>>v2;
	if(v1<=v2)
	{
		low=v1;
		height=v2;
	}else
	{
		low=v2;
		height=v1;
	}
	int sum=0;
	for(int i=low;i<=height;i++)
	{
		sum+=i;
	}
	cout<<"sum of "<<low<<" and "<<height<<" inclusive is "<<sum<<endl;

	return 0;
}
