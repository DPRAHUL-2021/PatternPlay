/*
Print This Pattern
N = 3
    A
  A B A
A B C B A
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Pattern
        char ch = 'A';
        int mid = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch << " ";
            if (j <= mid)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Enter The Value Of 'n' : " << endl;
    int n;
    cin >> n;
    printPattern(n);
}