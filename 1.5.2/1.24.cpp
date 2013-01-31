#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item item1,item2;
	cout<<"please input the first book info"<<endl;
	int amount=1;
	cin>>item1;
	while(cin>>item2)
	{
		if(item1.same_isbn(item2))
		{
			amount++;
		}else
		{
			 cout<<"amount of pre book"<<amount<<endl;
			 amount=1;
			 item1=item2;
		}
	}
	cout<<"amount of last book"<<amount<<endl;
	return 0;
}
