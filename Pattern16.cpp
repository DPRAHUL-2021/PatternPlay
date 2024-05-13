/*
Print This Pattern
N = 7
G 
G F 
G F E 
G F E D 
G F E D C 
G F E D C B 
G F E D C B A 
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	for(int i = 0 ; i<n;i++)
    {
        char count = char(64+n);
        for(int j=0;j<=i;j++)
        {
            cout<<count<<" ";
            count--;
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