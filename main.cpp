#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool fun()noexcept
{
    return false;
}

int main()
{
    cout << noexcept(fun()) << endl;
}