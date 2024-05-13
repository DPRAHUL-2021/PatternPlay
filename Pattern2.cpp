/*
Print This Pattern 
* 
* * 
* * * 
* * * * 
* * * * * 
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
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
