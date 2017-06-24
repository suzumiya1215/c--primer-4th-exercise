#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	int A = 0, E = 0, I = 0, O = 0, U = 0;
	int other = 0;
	cin >> str;
	for (string::iterator iter = str.begin(); iter != str.end(); ++iter)
	{
		switch (*iter)
		{
		case 'a':
			++a;
			break;
		case 'e':
			++e;
			break;
		case 'i':
			++i;
			break;
		case 'o':
			++o;
			break;
		case 'u':
			++u;
			break;
		case 'A':
			++A;
			break;
		case 'E':
			++E;
			break;
		case 'I':
			++I;
			break;
		case 'O':
			++O;
			break;
		case 'U':
			++U;
			break;
		default:
			++other;
			break;
		}
	}
	cout << "a="<<a << '\n' << "e=" << e << '\n' << "i=" << i << '\n' << "o=" << o << '\n' << "u=" << u << '\n'
		<< "A=" << A << '\n' << "E=" << E << '\n' << "I=" << I << '\n' << "O=" << O << '\n' << "U=" << U << '\n'
		<< "other=" << other << endl;
	system("pause");
	return 0;
}