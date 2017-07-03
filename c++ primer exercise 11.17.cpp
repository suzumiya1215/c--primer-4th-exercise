#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace std;

int main()
{
	vector<int> vec = { 1,2,3,4,5,6,7,8 };
	istream_iterator<string> in_iter(cin), end;
	vector<int> vec(in_iter, end);

	system("pause");
	return 0;
}