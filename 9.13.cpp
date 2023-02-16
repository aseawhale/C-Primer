#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	list<int> ilist = { 1, 2, 3, 4, 5, 6 };
	vector<int> ivec = { 7, 6, 5, 4, 3, 2, 1 };

	vector<double> dvec(ilist.begin(), ilist.end());
	vector<double> dvecl(ivec.begin(), ivec.end());
	cout << dvec.capacity() << " " << dvec.size() << " " << dvec[0] << " " << dvec[dvec.size() - 1] << endl;
	cout << dvecl.capacity() << " " << dvecl.size() << " " << dvecl[0] << " " << dvecl[dvecl.size() - 1] << endl;
	return 0;
}