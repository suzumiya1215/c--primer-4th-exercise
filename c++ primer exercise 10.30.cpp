#include<iostream>
#include<string>
#include<map>
#include<set>
#include<vector>
#include<list>
#include<deque>
#include<iterator>
#include<fstream>
#include<sstream>
using namespace std;

void read_file(ifstream &text)
{
	string word;
	vector<string> vec_word;
	map<string, int> map_word;
	int line = 1;
	using ui = map<string, int>;
	typedef map<string, int>::value_type vt;
	while (getline(text, word))
	{
		vec_word.push_back(word);
		++map_word.insert[word, line];
		++line;
	}
	void store_file(ifstream &text);
	void build_map(ifstream &text);
}

void store_file(ifstream &text)
{
	vector<string> vec_word;
	string word;
	while (getline(text, word))
		vec_word.push_back(word);
}

void build_map(ifstream &text)
{
	string word;
	int line = 1;
	map<string, int> map_word;
	while (getline(text, word))
	{
		++map_word.insert[word, line];
		++line;
	}
}

auto run_query(vector<string> vec_word)
{
	set<string, int> set_word;
	int line = 1;
	string is_word;
	for (vector<string>::iterator iter = vec_word.begin(); iter != vec_word.end(); ++iter)
	{
		istringstream stream(*iter);
		while (stream >> *iter)
			set_word.insert(*iter);
	}
	return set_word;
}

string text_line(int line, map<string, int> map_word)
{
	string return_line;
	for (map<string, int>::iterator iter = map_word.begin(); iter != map_word.end(); ++iter)
	{
		if (iter->second == line)
			return_line = iter->first;
	}
	return return_line;
}
