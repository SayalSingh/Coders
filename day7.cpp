// 21 - 06 - 24
// polymorphism - function/method overloading - function/method overriding - string

/*
// polymorphism
#include <iostream>
#include <stdlib.h>

using namespace std;

class A
{
public:
    void abc(int i, int j)
    {
        cout << i + j << endl;
    }
} ab;

class B : public A
{
public:
    void abc(int i, int j)
    {
        cout << i * j << endl;
    }
} pq;
int main()
{
    system("cls");

    ab.abc(2, 3);
    pq.abc(2, 3);

    return 0;
} */

/*
// overriding

#include <iostream>
#include <stdlib.h>

using namespace std;
int add(int i, int j, int k)
{
    cout << i + j + k << endl;

    return 0;
}

int add(int i, int j)
{
    cout << i + j << endl;

    return 0;
}
int main()
{
    system("cls");
    add(2, 4);
    add(23, 23, 43);

    return 0;
} */
