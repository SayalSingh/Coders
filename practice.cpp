#include <iostream>
#include <stdlib.h>

using namespace std;
/*
int main()
{
    system("cls");

    cout << "*               *" << endl;
    cout << "*               *" << endl;
    cout << "*               *" << endl;
    cout << "*               *" << endl;
    cout << "*               *" << endl;
    cout << "* * * * * * * * *" << endl;
    cout << "*               *" << endl;
    cout << "*               *" << endl;
    cout << "*               *" << endl;
    cout << "*               *" << endl;

    cout << "\n\n"
         << endl;
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            if ((a == 3) && (b == 2))
            {
                cout << "  ";
            }
            else if ((a == 4) && ((b == 2) || (b == 3)))
            {
                cout << "  ";
            }

            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
} */

/* int main()
{
    system("cls");

    for (int a = 1; a <= 5; a++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((j = 1) || (j = 2) || (j = 4) || (j = 5))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
} */

int main()
{
    system("cls");

    /* for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 0 || j == 5 || i == 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    } */

    /* for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == 0 || j == 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    } */

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 0 || i == 5 || j == 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}