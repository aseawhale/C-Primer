#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> vInt, unsigned index)
{
	unsigned sz = vInt.size();
	if (!vInt.empty() && index < sz)
	{
		cout << vInt[index] << endl;
		print(vInt, ++index);
	}
}

int main()
{
	vector<int> v = { 1, 2, 3 };
	print(v, 0);

	return 0;
}