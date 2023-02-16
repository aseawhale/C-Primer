#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main()
{
	list<int> ilist = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> odd_d, even_d;

	for (auto iter = ilist.cbegin(); iter != ilist.cend(); ++iter)
		if (*iter & 1)
			odd_d.push_back(*iter);
		else
			even_d.push_back(*iter);

	cout << "�����У�";
	for (auto i = odd_d.cbegin(); i != odd_d.cend(); ++i)
		cout << *i << " ";
	cout << endl << "ż���У�";
	for (auto i = even_d.cbegin(); i != even_d.cend(); ++i)
		cout << *i << " ";
	return 0;
}