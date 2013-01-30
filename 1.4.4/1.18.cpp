#include <iostream>
using namespace std;
int main()
{
	int v1,v2,low,up;
	cout <<"please input 2 numbers\n";
	cin>>v1>>v2;
	if(v1>v2)
	{
		low=v2;
		up=v1;
	}else
	{
		low=v1;
		up=v2;
	}
	for(;low<=up;low++)
		cout<<low<<endl;
	return 0;
}
