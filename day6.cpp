// class-objects-bubble sorting- pointers-call by reference
// 20-06-24

#include <iostream>
#include <stdlib.h>
using namespace std;

/* int main()
{
    system("cls");

    int x = 5;
    int *p = &x;
    cout << p << endl;
    cout << *p << endl;

    int **pp = &p;

    cout << **pp << endl;
    cout << pp << endl;

    return 0;
} */

/*
int main()
{
    system("cls");
    int x[] = {10, 56, 23, 4, 5};

    int *p = x;

    cout << *p << endl;
    cout << p << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << endl;
    }

    return 0;
} */

class A
{
public:
    int x = 5;

    void
    B()
    {
        cout << "GOOgle" << endl;
    }
} abc;

class B : public A
{
public:
    int y = 4;
};

int main()
{
    system("cls");
    class A obj;
    class B sss;
    cout << sss.y << endl;
    cout << sss.x << endl;

    abc.B();
    return 0;
}

/* int main()
{
    system("cls");

    return 0;
}*/