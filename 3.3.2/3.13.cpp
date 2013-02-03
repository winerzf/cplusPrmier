#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> stack;
	int input;
	while(cin>>input)
		stack.push_back(input);
	if(stack.size()==0)
	{
		cout<<"no elements?"<<endl;
		return -1;
	}
	for(vector<int>::size_type i=0;i<stack.size()-1;i+=2)
	{
		cout<<stack[i]+stack[i+1]<<"\t";
		if((i+1)%10==0)
			cout<<endl;
	}
	if(stack.size()%2==1)
		cout<<endl
		<<"  last one is not been summed,value is "<<stack[stack.size()-1]<<endl;
	
	vector<int>::size_type first=0,last=stack.size()-1;
	for(;first<last;first++,last--)
	{
		cout<<stack[first]+stack[last]<<"\t";
		if((first+1)%6==0)
			cout<<endl;
	}
	if(first==last)
		cout<<endl<<"the cent one is not been summed,value is "<<stack[first]<<endl;
		return 0;
}
