#include<iostream>
#include<memory>
using namespace std;

class Test
{
public:
	Test();
	~Test();

private:
	
};

Test::Test()
{
	cout << "���캯��" << endl;
}
Test::~Test()
{
	cout << "��������" << endl;
}

int main()
{
	Test* test = new Test();
	unique_ptr<Test> ptr1(test);
	unique_ptr<Test> ptr2 = std::move(ptr1);
	cout << test << endl;
	cout << ptr1 << endl;
	cout << ptr2 << endl;
	//ptr = unique_ptr<Test>(new Test);

}