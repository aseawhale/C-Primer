#include<iostream>
#include<string>

using namespace std;

string make_plural(size_t ctr, const string& word, const string& ending = "s")
{
	return(ctr > 1) ? word + ending : word;
}

int main()
{
	cout << "cat�ĵ�����ʽ�ǣ�" << make_plural(1, "cat") << endl;
	cout << "cat�ĸ�����ʽ�ǣ�" << make_plural(2, "cat") << endl;
	cout << "box�ĵ�����ʽ�ǣ�" << make_plural(1, "box", "es") << endl;
	cout << "box�ĸ�����ʽ�ǣ�" << make_plural(2, "box", "es") << endl;

	return 0;
}