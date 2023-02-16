#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 1;
	auto sum = [a](int b) {return a + b; };
	cout << sum(1) << endl;
	return 0;
}