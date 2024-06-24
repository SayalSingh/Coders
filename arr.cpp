#include <iostream>
#include <stdlib.h>
using namespace std;

/* int main()
{
    system("cls");
    int a = 2;
    int b = 1;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "---------------------------------------" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << endl;
        }
    }

    return 0;
} */

int main()
{
    system("cls");

    int arr[] = {10,
                 20,
                 300,
                 40,
                 50};

    int len = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}