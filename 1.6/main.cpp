#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item total,trans;
	if(cin>>total)
	{
		while(cin>>trans)
		{
			if(total.same_isbn(trans))
			{
				total+=trans;
			}else
			{
				cout<<total<<endl;
				total=trans;
			}
			cout<<total<<endl;
		}
	}else
	{
		cout<<"No data?"<<endl;
		return -1;
	}
	return 0;
}
