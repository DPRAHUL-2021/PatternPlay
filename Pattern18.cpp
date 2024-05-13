/*

Print This Pattern
N = 7
1                         1
1 2                     2 1
1 2 3                 3 2 1
1 2 3 4             4 3 2 1
1 2 3 4 5         5 4 3 2 1
1 2 3 4 5 6     6 5 4 3 2 1
1 2 3 4 5 6 7 7 6 5 4 3 2 1

*/

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	for(int i=1;i<=n;i++)
    {
        // Pattern
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        // Space
        for(int j=1;j<n*2-i;j++)
        {
            cout<<" ";
        }
        // Reverse Pattern
        int count = i;
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count--;
        }
        cout<<"\n";
    }
}

int main()
{
    cout << "Enter The Value Of 'n' : " << endl;
    int n;
    cin>>n;
    printPattern(n);
}