#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item book1,book2;
	cin>>book1>>book2;
	if(book1.same_isbn(book2))
		cout<<book1+book2<<endl;
	else
		cout<<"not same books"<<endl;

	return 0;

}
