#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<string> stack;
	string input;
	while(cin>>input)
	{
		stack.push_back(input)	;
	}
	for(vector<string>::size_type i=0;i<stack.size();i++)
	{
		for(string::size_type index=0;index<stack[i].size();index++)
		{
			stack[i][index]=toupper(stack[i][index]);
		}
		cout<<stack[i]<<"\t";
		if((i+1)%8==0)
		cout<<endl;
	}
	return 0;
}

