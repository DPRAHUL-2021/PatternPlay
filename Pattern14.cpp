/*
Print This Pattern
N = 4
A
B B
C C C
D D D D
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	char count = 'A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<count<<" ";
        }
        count++;
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