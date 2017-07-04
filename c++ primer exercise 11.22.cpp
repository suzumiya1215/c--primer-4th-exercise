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
	vector<int> vec = { 1,2,3,4,5,6,7,8,9,10 };
	list<int> lis(vec.rbegin() + 3, vec.rbegin() + 8);//list初始化技巧
	for (list<int>::iterator iter = lis.begin(); iter != lis.end(); ++iter)
		cout << *iter << '\n';

	system("pause");
	return 0;
}