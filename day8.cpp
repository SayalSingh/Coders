// 22-06-24
// Math fucntion - Exception Handling(try/catch) - Structure - Enum

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    system("cls");
    string c;
    cin >> c;
    string d = "";

    for (int i = (c.length() - 1); i >= 0; i--)
    {
        d += c[i];
    }
    if (c.compare(d) == 0)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome" << endl;
    }

    cout << c << endl;
    cout << d << endl;

    return 0;
}