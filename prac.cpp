/* #include <iostream>
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
} */

/*
// C++ program to create calculator
#include <iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    system("cls");

    char op;
    float num1, num2;

    cin >> op;


    cin >> num1 >> num2;


    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;


    default:
        cout << "Error! operator is not correct";
    }


    return 0;
}

 */
/*
#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    system("cls");

    int n;

    cout << "enter no. of terms" << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << " === = = ==" << endl;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double avg = sum / n;
    cout << avg << endl;

    return 0;
}
 */
// A recursive C++ program to
// calculate the size of the tree
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
class node
{
public:
    int data;
    node *left;
    node *right;
};

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node *newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

/* Computes the number of nodes in a tree. */
int size(node *node)
{
    if (node == NULL)
        return 0;
    else
        return (size(node->left) + 1 + size(node->right));
}

/* Driver code*/
int main()
{
    system("cls");
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << root->left->right->data << endl;
    // cout << "Size of the tree is " << size(root);
    return 0;
}

// This code is contributed by rathbhupendra


#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
    system("cls");

    
}