#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    system("cls");

    fstream f;
    // opening file using fstream
    f.open("hulk.txt");
    string word;
    while (f >> word)
    {
        cout << word << " ";
    }
    f.close();

    // ofstream obj("hulk.txt", ios::app);
    // obj << " hello world";

    // obj.close();

    // obj.clear();

    return 0;
}