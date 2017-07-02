#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace std;

bool GT4(string &word)
{
	return word.size() >= 4;
}

bool shorter(const string &a, const string &b)
{
	return a.size() < b.size();
}

int main()
{
	string word;
	vector<string> vec;
	while (cin >> word)
		vec.push_back(word);
	cin.clear();
	sort(vec.begin(), vec.end());
	vector<string>::iterator iter_unique = unique(vec.begin(), vec.end());
	vec.erase(iter_unique, vec.end());
	stable_sort(vec.begin(), vec.end(), shorter);
	vector<string>::size_type st = count_if(vec.begin(), vec.end(), GT4);

	cout << st << '\n';
	for (vector<string>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
		cout << *iter << '\n';

	system("pause");
	return 0;
}