#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int i=50;
	while(i<=100)
	{
		sum+=(i++);
	}
	cout<<"50 to 100 sum is"<<sum<<endl;
	return 0;
}
