/*
Print This Pattern
N = 6
A
A B
A B C
A B C D
A B C D E
A B C D E F

*/

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	for(int i=0;i<n;i++)
    {
        char count = 'A';
        for(int j=0;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
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
