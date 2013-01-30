#include <iostream>
using namespace std;
int main()
{
	cout<<"please input some numbers"<<endl;
	int a;
	int sum=0;
	while(cin>>a)
	{
		if(a<0)
			sum++;
	}
	cout<<sum<<" numbers are less than 0"<<endl;
	return 0;
}
