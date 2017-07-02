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
	vector<int> vec = { 1,2,3,4,5,6,7,8 };

	//list<int> lis = { 9,10,11,12,13,14,15,16 };
	//list<int>::iterator iter = lis.begin() + 3;
	//list的迭代器不能加，比如 lis.begin() + 3 ，是错的
	//但是vector的迭代器能加 ，vec.begin() + 3 ，是对的

	vector<int> lis = { 9,10,11,12,13,14,15,16 };
	vector<int>::iterator iter = lis.begin() + 4;

	replace_copy(vec.begin(), vec.end(), inserter(lis, iter), 6, 22);
	//此处是插进来的容器，6替换成22，不是原容器的替换
	//inserter接受两个参数，一个容器实参，一个迭代器实参

	replace_copy(vec.begin(), vec.end(), back_inserter(lis), 6, 22);
	//back_inserter是尾部插入,只接受一个容器实参

	replace_copy(vec.begin(), vec.end(), front_inserter(lis), 6, 22);
	//此条错误，未验证front_inserter用途
	//front_inserter不能用于vector

	for (vector<int>::iterator iter2 = lis.begin(); iter2 != lis.end(); ++iter2)
		cout << *iter2 << '\n';

	system("pause");
	return 0;
}