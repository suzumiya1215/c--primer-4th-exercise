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

	typedef multimap<string, string>::iterator iter;
	for (iter iter3 = store.begin(); iter3 != store.end(); ++iter3)
	{
		string str1 = iter3->first, str2;
		if (str2.empty() || str1[0] != str2[0])
			cout << iter3->first[0] << '\n';
		cout << str1 ;
		pair<iter, iter> pr = store.equal_range(iter3->first);
		while (pr.first != pr.second)
		{
			cout << ',' << pr.first->second;
			++pr.first;
		}
		cout << endl;
		iter3 = pr.second;
		str2 = str1;
	}
	
	system("pause");
	return 0;
}
