#include<iostream>

using namespace std;

void fun(int& p, int& q)
{
	int tmp = p;
	p = q;
	q = tmp;
}

int main()
{
	int p =1;
	int q =2;
	
	cout << p << ",," << q << endl;
	fun(p, q);
	cout << p << ",," << q << endl;

}
