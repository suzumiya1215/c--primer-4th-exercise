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
	for (vector<int>::reverse_iterator iter = vec.rbegin(); iter != vec.rend(); ++iter)
		cout << *iter << '\n';
	cout << '\n';
	for (vector<int>::iterator iter= vec.end()-1;iter!=vec.begin();--iter)
		cout << *iter << '\n';
	cout << *vec.begin() << '\n';
	system("pause");
	return 0;
}