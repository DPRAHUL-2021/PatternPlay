/*

Print This Pattern
N = 3
*
**
***
**
*

*/


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    if(n!=1)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}

int main()
{
    cout << "Enter The Value Of 'n' : " << endl;
    int n;
    cin>>n;
    printPattern(n);
}
