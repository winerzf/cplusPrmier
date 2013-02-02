#include <iostream>
using namespace std;
int main()
{
	string input,total;
	while(cin>>input)
	{
		for(string::size_type i=0;i<input.size();i++)
			if(!ispunct(input[i]))
				total+=input[i];
	}
	cout<<total<<endl;
	return 0;
}
