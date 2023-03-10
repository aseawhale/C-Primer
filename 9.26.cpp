#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> iv;
	list<int> il;

	iv.assign(ia, ia + 11);
	il.assign(ia, ia + 11);

	vector<int>::iterator iiv = iv.begin();
	while (iiv != iv.end())
		if (!(*iiv & 1))
			iiv = iv.erase(iiv);
		else
			iiv++;


	list<int>::iterator iil = il.begin();
	while (iil != il.end())
		if (*iil & 1)
			iil = il.erase(iil);
		else
			iil++;

	for (auto i = iv.cbegin(); i != iv.cend(); ++i)
		cout << *i << " ";
	cout << endl;
	for (auto j = il.cbegin(); j != il.cend(); ++j)
		cout << *j << " ";

	return 0;
}