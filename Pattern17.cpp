/*
Print This Pattern 
N = 6
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	int count = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<count<<" ";
            if(count == 1)
            {
                count = 0;
            }
            else
            {
                count = 1;
            }
        }
        cout<<endl;
        if(i % 2 == 0)
        {
            count =  0;
        }
        else
        {
            count = 1;
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