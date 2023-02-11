#include<iostream>
#include<string>

using namespace std;

string make_plural(size_t ctr, const string& word, const string& ending = "s")
{
	return(ctr > 1) ? word + ending : word;
}

int main()
{
	cout << "cat的单数形式是：" << make_plural(1, "cat") << endl;
	cout << "cat的复数形式是：" << make_plural(2, "cat") << endl;
	cout << "box的单数形式是：" << make_plural(1, "box", "es") << endl;
	cout << "box的复数形式是：" << make_plural(2, "box", "es") << endl;

	return 0;
}