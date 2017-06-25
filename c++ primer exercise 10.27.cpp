#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
using namespace std;

int main()
{
	multimap<string, string> store;
	store.insert(make_pair(string("a"), string("a1")));
	store.insert(make_pair(string("a"), string("a2")));
	store.insert(make_pair(string("a"), string("a3")));
	store.insert(make_pair(string("a"), string("a4")));
	store.insert(make_pair(string("b"), string("b1")));
	store.insert(make_pair(string("b"), string("b2")));
	store.insert(make_pair(string("b"), string("b3")));
	store.insert(make_pair(string("b"), string("b4")));
	
	string search;
	cin >> search;
	auto range = store.equal_range(search);
	for (auto iterator = range.first; iterator != range.second;)
		iterator = store.erase(iterator);

	multimap<string, string>::iterator iter2 = store.begin();
	while (iter2 != store.end())
	{
		cout << iter2->first << '\t' << iter2->second << endl;
		++iter2;
	}

	system("pause");
	return 0;
}