#include <iostream>
using namespace std;
int main()
{
	cout<<"please input 2 numbers\n";
	int v1,v2,low,up;
	cin>>v1>>v2;
	if(v1>v2)
	{
		low=v2;
		up=v1;
	}else{
		low=v1;up=v2;
	}
	int i=0;
	for(;low<=up;low++)
	{
		cout<<low<<"\t";
		i++;
		if(i%10==0)
			cout<<"\n";
	}
	return 0;

}
