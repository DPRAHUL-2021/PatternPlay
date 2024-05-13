/*
Print This Pattern
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j<<" ";
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