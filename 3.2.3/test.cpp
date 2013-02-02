#include <iostream>
using namespace std;
int main()
{
	string str="aaaaaaaaaaaaaaaaaaaaa";
	for(int i=0;i<26;i++)
	{
		str=str+str;
		string::size_type len=str.size();
		cout<<i<<"\t"<<len<<endl;
	}
	return 0;
}
