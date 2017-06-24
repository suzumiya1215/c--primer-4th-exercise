
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<time.h>
using namespace std;

int main()
{
	vector<string> want_read;
	set<string> alread_read, noread_book;
	string book, rand_book, willread_book, erase_book;
	cout << "which book want to read ?" << endl;
	while (cin >> book)
	{
		want_read.push_back(book);
		noread_book.insert(book);
	}
	cin.clear();
	int randnumber = time(0) % want_read.size();
	rand_book = want_read[randnumber];
	cout << "lay in alread." << '\n'
		<< "rand select one book for you to read now" << '\n'
		<< "this book is : " << rand_book << endl;
	alread_read.insert(rand_book);
	cout << "please entry some book which you will read in next six mooth." << '\n';
	while (cin >> willread_book)
	{
		vector<string>::iterator iter = find(want_read.begin(), want_read.end(), willread_book);
		if (iter != want_read.end())
		{
			alread_read.insert(willread_book);
			noread_book.erase(willread_book);
			break;
		}
		else if (iter == want_read.end())
			cout << "can not find this book." << endl;
	}
	cin.clear();
	cout << "pass six mooth." << '\n' << "please entry some book which you do not read : ";
	while (cin >> erase_book)
	{
		if (alread_read.count(erase_book))
		{
			alread_read.erase(erase_book);
			noread_book.insert(erase_book);
		}
	}
	for (set<string>::iterator iter = alread_read.begin(); iter != alread_read.end(); ++iter)
		cout << "this is read book : " << *iter << endl;
	cout << endl;
	for (set<string>::iterator iter = noread_book.begin(); iter != noread_book.end(); ++iter)
		cout << "this is noread book : " << *iter << endl;
	cout << "this is all system." << endl;
	system("pause");
	return 0;
}