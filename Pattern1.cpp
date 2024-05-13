// Print this Pattern
// * * * * 
// * * * * 
// * * * * 
// * * * *

#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter The Value Of 'n' : " << endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
