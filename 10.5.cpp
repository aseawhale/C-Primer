#include<iostream>
#include<fstream>
#include<string.h>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	char* p[3] = {"Hello", "World", "!"};
	char* q[] = {_strdup(p[0]), _strdup(p[1]), _strdup(p[2])};
	char* r[] = {p[0], p[1], p[2]};

	cout << equal(begin(p), end(p), q) << endl;
	cout << equal(begin(p), end(p), r) << endl;
	return 0;
}