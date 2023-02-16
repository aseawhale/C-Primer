#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> ivec = { 1, 2, 3, 4, 5, 6 };
	vector<int> ivec1 = { 6, 5, 4, 3, 2, 1 };
	vector<int> ivec2 = { 1, 2, 3, 4, 5, 6 };
	vector<int> ivec3 = { 1, 2, 3, 4, 5 };

	cout << (ivec == ivec1) << endl;
	cout << (ivec == ivec2) << endl;
	cout << (ivec == ivec3) << endl;

	//ivec3.push_back(6);
	ivec.pop_back();

	cout << (ivec == ivec3) << endl;

	//cout << dvecl.capacity() << " " << dvecl.size() << " " << dvecl[0] << " " << dvecl[dvecl.size() - 1] << endl;
	return 0;
}