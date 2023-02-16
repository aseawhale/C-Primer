#include<iostream>
#include<vector>
#include<list>

using namespace std;

bool l_v_equal(vector<int>& ivec, list<int>& ilist)
{
	if (ilist.size() != ivec.size())
		return false;
	auto lb = ilist.cbegin();
	auto le = ilist.cend();
	auto vb = ivec.cbegin();
	for (; lb != le; lb++, vb++)
		if (*lb != *vb)
			return false;
	return true;
}

int main()
{
	vector<int> ivec = { 1, 2, 3, 4, 5, 6 };
	list<int> ilist = { 6, 5, 4, 3, 2, 1 };
	list<int> ilist1 = { 1, 2, 3, 4, 5, 6 };
	list<int> ilist2 = { 1, 2, 3, 4, 5 };

	cout << l_v_equal(ivec, ilist) << endl;
	cout << l_v_equal(ivec, ilist1) << endl;
	cout << l_v_equal(ivec, ilist2) << endl;

	return 0;
}