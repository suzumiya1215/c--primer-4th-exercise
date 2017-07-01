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
	list<int> a = { 1,2,3,4,5,6,7,8 };
	fill_n(a.begin(), 8, 0);
	for (list<int>::iterator iter = a.begin(); iter != a.end(); ++iter)
		cout << *iter << endl;

	system("pause");
	return 0;
}