/*
Print This Pattern
N = 6
A B C D E F 
A B C D E 
A B C D 
A B C 
A B 
A 
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	for(int i=0;i<n;i++)
    {
        for(char j='A';j<'A'+n-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    cout << "Enter The Value Of 'n' : " << endl;
    int n;
    cin>>n;
    printPattern(n);
}