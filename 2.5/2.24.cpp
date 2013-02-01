#include <iostream>
using namespace std;
int main()
{
	int ival=1.01;
	int &rval1=ival;
	int &rval2=ival;
	const int &rval3=1;
	rval2=3.141;
	rval2=rval3;
	cout<<ival<<"\t"<<rval2;
	return 0;
}
