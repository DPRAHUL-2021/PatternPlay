/*
Print This Pattern
n = 6
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************
*/

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        iniS += 2;

        cout << endl;
    }

    iniS = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        iniS -= 2;

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