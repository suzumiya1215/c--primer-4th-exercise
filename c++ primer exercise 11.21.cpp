#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace std;

int main()
{
	list<int> lis = { 1,2,3,4,5,6,7,8,0,1,2,3,0,4,5 };
	list<int>::reverse_iterator iter = find(lis.rbegin(), lis.rend(), 0);
	cout << *iter << '\n';

	system("pause");
	return 0;
}