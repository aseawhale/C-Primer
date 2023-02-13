#ifndef SALES_DATA_H_INCLUDED
#define SALES_DATA_H_INCLUDED

#include <iostream>
#include<string>

using namespace std;

class Person {
private:
	string strName;
	string strAddress;
public:

	string getName() const { return strName; }
	string getAddress() const { return strAddress; }
	friend std::istream& read(std::istream& is, Person& per);
	friend std::ostream& print(std::ostream& os, const Person& per);
	Person() = default;
	Person(const string& name, const string& add) {
		strName = name;
		strAddress = add;
	}
	Person(std::istream& is) { is >> *this; }
};

std::istream& read(std::istream& is, Person& per)
{
	return is >> per.strName >> per.strAddress;
}

std::ostream& print(std::ostream& os, const Person& per)
{
	return os << per.strName << " " << per.strAddress;
}

#endif // !SALES_DATA_H_INCLUDED