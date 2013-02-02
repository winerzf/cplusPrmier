#include <iostream>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	string low,up;
	if(s1==s2)
	{
		cout << "equal"<<endl;
	}else
	{
		if(s1>s2)
		{
			low=s2;
			up=s1;
		}else
		{
			low=s1;
			up=s2;
		}
		cout<<"\"" <<up <<"\" is upper than \""<<low<<"\"\n";
	}
	if(s1.size()==s2.size())
		cout<<"length equal\n";
	else
	{
		if(s1.size()>s2.size())
		{
			low=s2;
			up=s1;
		}else
		{
			low=s1;
			up=s2;
		}

		cout<<"\"" <<up <<"\" is more len than \""<<low<<"\"\n";
	}
	return 0;

}
