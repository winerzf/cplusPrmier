#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> list;
	for(vector<int>::size_type ix=0;ix!=10;ix++)
		list.push_back(ix);
	vector<int>::iterator it=list.begin();
	cout<<*it<<endl;
	*it=100;
	cout<<*it<<endl;
	return 0;
}
