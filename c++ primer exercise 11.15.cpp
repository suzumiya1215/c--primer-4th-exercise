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
	list<int> lis = { 1,2,3,4,5,6,7,8,2,4,6,8,1,3,5,7,9,1,1,1,1,2,2,2,2,3,3,4,3,3 };
	vector<int> vec;
	unique_copy(lis.begin(), lis.end(), back_inserter(vec));

	//unique_copy的第三个参数，若vector empty，可以用back_inserter或者front_inserter
	//unique_copy并没有删除重复元素...
	//它只是删掉了相邻的重复元素

	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
		cout << *iter << '\n';

	system("pause");
	return 0;
}