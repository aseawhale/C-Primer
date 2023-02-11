#include<iostream>
#include<vector>
#define NDEBUG

using namespace std;

void print(vector<int> vInt, unsigned index)
{
	unsigned sz = vInt.size();
	#ifndef NDEBUG
	cout << "vector对象的大小是:" << sz << endl;
	#endif // !NDEBUG

	if (!vInt.empty() && index < sz)
	{
		cout << vInt[index] << endl;
		print(vInt, index + 1);
	}
}

int main()
{
	vector<int> v = { 1, 2, 3 };
	print(v, 0);

	return 0;
}