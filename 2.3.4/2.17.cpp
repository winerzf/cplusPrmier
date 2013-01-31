#include <iostream>
#include <string>
using namespace std;
string global_str;
int global_int;
/**
在本机运行发现输出一致，可能为编译器原因
*/

int main()
{
	int local_int;
	string local_string;
	cout << global_str<<"\t"<<global_int<<endl;
	cout << local_string<<"\t"<<local_int<<endl;
	return 0;
}

